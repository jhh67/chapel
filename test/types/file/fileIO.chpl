use IO;

config var n = 10,
           filename = "arr.out";
config const epsilon = 10e-13;

const ADom = {1..n, 1..n};

var A: [ADom] real = [(i,j) in ADom] (i-1) + ((j-1)/10.0);

writeArray(n, A, filename);
var B = readArray(filename);

const numErrors = + reduce [i in ADom] (abs(A(i) - B(i)) > epsilon);

writeln("B is:\n", B);

if (numErrors > 0) {
  writeln("FAILURE");
} else {
  writeln("SUCCESS");
}


proc writeArray(n, X, filename) {
  var outfile = open(filename, ioMode.cw).writer(locking=false);
  outfile.writeln(n, " ", n);
  outfile.writeln(X);
  outfile.close();
}


proc readArray(filename) {
  var m, n: int;

  var infile = open(filename, ioMode.r).reader(locking=false);
  infile.read(m, n);

  const XDom = {1..m, 1..n};
  var X: [XDom] real;

  infile.read(X);

  infile.close();

  return X;
}


