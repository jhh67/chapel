class C { var x: int; }

proc main() {
  var x:borrowed C?;
  var b = x:borrowed;
  writeln(b.type:string);
  var u = x.borrow():unmanaged;
  writeln(u.type:string);

}
