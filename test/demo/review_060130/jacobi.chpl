config var n : int = 3;
config var epsilon : real = 0.01;
config var verbose : bool = true;

var R : domain(2) = {1..n, 1..n};
var BigR : domain(2) = {0..n+1, 0..n+1};

var A : [BigR] real;
var Temp : [R] real;

proc main() {
  [ij in BigR with (ref A)]  A(ij) = 0.0;
  [j in 1..n with (ref A)] A(n+1,j) = 1.0;

  if (verbose) {
    writeln("Initial configuration:");
    writeln(A);
  }

  var iteration = 0, delta = 1.0;

  while (delta > epsilon) {
    [(i,j) in R with (ref Temp)] Temp(i,j) = (A(i-1,j) + A(i+1,j) + A(i,j-1) + A(i,j+1)) / 4.0;
    delta = 0.0;
    for (i,j) in R {
      delta = max(delta, Temp(i,j)-A(i,j));
      A(i,j) = Temp(i,j);
    }
    iteration += 1;
    if (verbose) {
      write("Configuration after iteration: ", iteration);
      writeln(" (delta = ", delta, ")");
      writeln(A);
    }
  }

  writeln("Jacobi computation complete.");
  writeln("Delta is ", delta, " (< epsilon = ", epsilon, ")");
  writeln("# of iterations: ", iteration);
}
