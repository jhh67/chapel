config var n: int = 16;

proc main() {
  const D: domain(1) = {1..n};
  var A: [D] int;

  forall i in D with (ref A) {
    A(i) = i;
  }

  writeln("A is: ", A);
}
