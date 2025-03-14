/*
 * Copyright 2020-2025 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

pragma "error mode fatal"
module MatrixMarket {

  use IO, DSIUtil;

  enum MMCoordFormat { Coordinate, Array }
  enum MMTypes { Real, Complex, Pattern }
  enum MMFormat { Symmetric, General }

  record MMInfo {
    var mm_coordfmt:MMCoordFormat;
    var mm_types:MMTypes;
    var mm_fmt : MMFormat;
  }

  proc high(d){
    if d.isSparse() then
      return d._value.parentDom.high;
    else
      return d.high;
  }

  proc initMMInfo(ref headerfields:[] string) {
    assert(headerfields(0) == "%%MatrixMarket", "Improperly formatted MatrixMarket file");
    assert(headerfields(1) == "matrix", "Improperly formatted MatrixMarket file");

    var toret:MMInfo;

    if headerfields(2) == "coordinate" {
      toret.mm_coordfmt = MMCoordFormat.Coordinate;
    }
    else if headerfields(2) == "array" {
      toret.mm_coordfmt = MMCoordFormat.Array;
    }
    else {
      assert(false, "Improperly formatted MatrixMarket file");
    }

    if headerfields(3) == "real" {
      toret.mm_types = MMTypes.Real;
    }
    else if headerfields(3) == "complex" {
      toret.mm_types = MMTypes.Complex;
    }
    else if headerfields(3) == "pattern" {
      toret.mm_types = MMTypes.Pattern;
    }
    else {
      assert(false, "Improperly formatted MatrixMarket file");
    }

    headerfields(4) = headerfields(4).strip("\n");
    if headerfields(4) == "general" {
      toret.mm_fmt = MMFormat.General;
    }
    else if headerfields(4) == "symmetric" {
      toret.mm_fmt = MMFormat.Symmetric;
    }
    else {
      assert(false, "Improperly formatted MatrixMarket file");
    }

    return toret;
   }

   class MMWriter {
      type eltype;
      var HEADER_LINE : string = "%%MatrixMarket matrix coordinate real general\n"; // currently the only supported MM format in this module

      var fd:file;
      var fout:fileWriter(locking=true);

      var headers_written:bool;
      var last_rowno:int;

      proc init(type eltype, const fname:string) {
         this.eltype = eltype;
         fd = open(fname, ioMode.cw);
         fout = fd.writer(region=0.., locking=true);
         headers_written=false;
      }

      proc write_headers(nrows, ncols, nnz=-1) {
         if eltype == int {
           HEADER_LINE = HEADER_LINE.replace("real", "pattern");
         }
         else if eltype == complex {
           HEADER_LINE = HEADER_LINE.replace("real", "complex");
         }

         fout.write(HEADER_LINE);
         fout.write("%\n");

         if nnz < 0 {
            var blank = "                                                  \n";
            fout.write(blank);
         }
         else {
            fout.writef("%i %i %i\n", nrows, ncols, nnz);
         }

         last_rowno=-1;
         headers_written=true;
      }

      proc fake_headers(nrows, ncols, nnz) {
        // Update the headers written in write_headers
        // since fout might still have buffered data, flush it
        // before we try to update it with a separate channel.
        fout.flush();

         var tfout = fd.writer(region=HEADER_LINE.numBytes.., locking=true);
         tfout.writef("%i %i %i", nrows, ncols, nnz);

         tfout.close();
      }

      proc write_vector(const i:int, jvec:[?Djvec] ?T) where Djvec.rank == 1 {
         assert(last_rowno <= i, "rows %i and %i not in sequential order!", last_rowno, i);
         var wfmt = "%i %i ";

         if T == complex {
           wfmt = wfmt + "%r %r\n";
           for (j,w) in zip(Djvec, jvec) {
             fout.writef(wfmt, i, j, w.re, w.im);
           }
         }
         else if T == int {
           wfmt = wfmt + "%d\n";
           for (j,w) in zip(Djvec, jvec) {
              if abs(w) > 1e-12 { fout.writef(wfmt, i, j, w); }
           }
         }
         else if T == real {
           wfmt = wfmt + "%r\n";
           for (j,w) in zip(Djvec, jvec) {
              if w > 0 { fout.writef(wfmt, i, j, w); }
           }
         }

         last_rowno = i;
         var ret:(int,int);
         if jvec.size < 1 { ret = (-1, 0); } else { ret = (Djvec.size, jvec.size); }
         return ret;
      }

      proc close() { fout.close(); fd.close(); }
      proc deinit() { this.close(); }
   }

proc mmwrite(const fname:string, mat:[?Dmat] ?T) where mat.domain.rank == 2 {
   var mw = new unmanaged MMWriter(T, fname);
   mw.write_headers(-1,-1,-1);

   var (ncols, nnz) = (0,0);
   var (nrows, poslast) = (-1,-1);
   var n_cols = -1;

   const DmatHighRow = high(Dmat)(0);
   const DmatHighCol = high(Dmat)(1);

   for r in 1..DmatHighRow {
     const dom = 1..DmatHighCol;
     const rng = [ j in dom] (r,j);
     const matvec = [ j in dom ] mat(r,j);
     mw.write_vector(r, matvec);
     n_cols = max(n_cols, DmatHighCol);
     nnz += DmatHighCol;
     ncols = r;
   }

   nrows = mw.last_rowno;
   ncols = n_cols; //if ncols != 0 then ncols else n_cols;

   mw.fake_headers(nrows, ncols, nnz);
   mw.close();
   delete mw;
}

class MMReader {
   var fd:file;
   var fin:fileReader(locking=true);
   var finfo:MMInfo;

   proc init(const fname:string) {
      fd = open(fname, ioMode.r, hints=ioHintSet.sequential|ioHintSet.prefetch);
      fin = fd.reader(region=0.., hints=ioHintSet.sequential|ioHintSet.prefetch, locking=true);
   }

   proc read_header() {
     var header:string;
     assert(fin.readLine(header) == true, "MMReader I/O error!");

     var headerfields = [ s in header.split(" ") ] s;
     this.finfo = initMMInfo(headerfields);

     // test for files that have a % beneath the matrix market format header
     var pctflag = false;
     while !pctflag {
       var percentfound:string;
       var offset = fin.offset();
       fin.readLine(percentfound);

       // didn't find a percentage, rewind channel by length of read string...
       if percentfound.find("%") == -1 {
         fin.close();
         fin = fd.reader(region=offset.., hints=ioHintSet.sequential|ioHintSet.prefetch, locking=true);
         pctflag = true;
       }
     }
   }

   proc read_matrix_info() {
      var nrows, ncols, nnz:int;
      var done = fin.readf("%i %i %i", nrows, ncols, nnz);
      assert(done == true, "error reading matrix market file's information");
      return (nrows, ncols, nnz);
   }

   proc read_dense_info() {
      var nrows, ncols:int;
      var done = fin.readf("%i %i", nrows, ncols);
      assert(done == true, "error reading matrix market file's information");
      return (nrows, ncols);
   }

   proc read_sparse_data(ref toret:[] ?T, ref spDom:domain) {
      param isSparse = toret.domain.isSparse();
      var done:bool = true;
      var tfmt :string;

      if T == complex {
        tfmt = "%r %r";
        const fmtstr = "%i %i " + tfmt + "\n";
        while done {
          var i, j:int;
          var wr, wi:real;
          done = fin.readf(fmtstr, i, j, wr, wi);
          const w:complex = (wr, wi):complex;
          if done {
            if isSparse then
              spDom += (i,j);
            toret(i,j) = w;
          }
        }

      }
      else {
        if T == real {
          tfmt = "%r";
        }
        else if T == int {
          tfmt = "%d";
        }

        const fmtstr = "%i %i " + tfmt + "\n";
        while done {
          var i, j:int;
          var w: T;
          done = fin.readf(fmtstr, i, j, w);
          if done {
            if isSparse then
              spDom += (i,j);
            toret(i,j) = w;
          }
        }
      }
   }

   proc read_dense_data(ref toret:[] ?T, ref spDom:domain) {
      param isSparse = toret.domain.isSparse();
      var tfmt :string;

      if T == complex {
        tfmt = "%r %r";
        // double-loop to ensure correct ordering
        for col in toret.domain.dim(1) {
          for row in toret.domain.dim(0) {
            var wr:real;
            var wi:real;
            fin.readf(tfmt, wr, wi);
            var w:complex = (wr, wi):complex;
            if isSparse then
              spDom += (row,col);
            toret(row,col) = w;
          }
        }
      }
      else {
        if T == real {
          tfmt = "%r";
        }
        else if T == int {
          tfmt = "%d";
        }

        // double-loop to ensure correct ordering
        for col in toret.domain.dim(1) {
          for row in toret.domain.dim(0) {
            var w:T;
            fin.readf(tfmt, w);
            if isSparse then
              spDom += (row,col);
            toret(row,col) = w;
          }
        }
      }
   }

   proc read_array_from_file(type eltype) {
     read_header();
     var nrows, ncols:int;


     if finfo.mm_coordfmt == MMCoordFormat.Array {
       (nrows, ncols) = read_dense_info();
     }
     else if finfo.mm_coordfmt == MMCoordFormat.Coordinate {
       var nnz:int;
       (nrows, ncols, nnz) = read_matrix_info();
     }

     var Dtoret = {1..nrows, 1..ncols};
     var toret : [Dtoret] eltype;

     if finfo.mm_types == MMTypes.Real { assert(eltype == real, "expected real, data in file is not real"); }
     if finfo.mm_types == MMTypes.Complex { assert(eltype == complex, "expected complex, data in file is not complex"); }
     if finfo.mm_types == MMTypes.Pattern { assert(eltype == int, "expected int, data in file is not int"); }

     if finfo.mm_coordfmt == MMCoordFormat.Array {
       read_dense_data(toret, Dtoret);
     }
     else if finfo.mm_coordfmt == MMCoordFormat.Coordinate {
       read_sparse_data(toret, Dtoret);
     }

     return toret;
   }

   proc read_sp_array_from_file(type eltype) {
     read_header();
     var nrows, ncols:int;

     var Dtoret : domain(2);

     if finfo.mm_coordfmt == MMCoordFormat.Array {
       (nrows, ncols) = read_dense_info();
     }
     else if finfo.mm_coordfmt == MMCoordFormat.Coordinate {
       var nnz:int;
       (nrows, ncols, nnz) = read_matrix_info();
     }

     Dtoret = {1..nrows, 1..ncols};
     var spDom : sparse subdomain(Dtoret);
     var toret : [spDom] eltype;

     if finfo.mm_types == MMTypes.Real { assert(eltype == real, "expected real, data in file is not real"); }
     if finfo.mm_types == MMTypes.Complex { assert(eltype == complex, "expected complex, data in file is not complex"); }
     if finfo.mm_types == MMTypes.Pattern { assert(eltype == int, "expected int, data in file is not int"); }

     if finfo.mm_coordfmt == MMCoordFormat.Array {
       read_dense_data(toret, spDom);
     }
     else if finfo.mm_coordfmt == MMCoordFormat.Coordinate {
       read_sparse_data(toret, spDom);
     }

     return toret;
   }

   proc close() {
      fin.close();
      fd.close();
   }

   proc deinit() { this.close(); }
}

/* Read a dense Matrix Market file
     :arg eltype: user provides (needs to know) the type of information stored
     :type type eltype
 */
proc mmread(type eltype, const fname:string) {
   var mr = new unmanaged MMReader(fname);
   var toret = mr.read_array_from_file(eltype);
   delete mr;
   return toret;
}

/* Read a sparse Matrix Market file
     :arg eltype: user provides (needs to know) the type of information stored
     :type type eltype
 */
proc mmreadsp(type eltype, const fname:string) {
   var mr = new unmanaged MMReader(fname);
   var toret = mr.read_sp_array_from_file(eltype);
   delete mr;
   return toret;
}

}
