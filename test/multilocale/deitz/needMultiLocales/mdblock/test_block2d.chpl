use BlockDist;

config var n = 8, tpl=1;

var Dist = new blockDist(rank=2, boundingBox={1..n, 1..n},dataParTasksPerLocale=tpl);
var Dom: domain(2) dmapped Dist = {1..n, 1..n};
var A: [Dom] real;

writeln(Dom);
writeln(A);
writeln();
writeln("element locales");
for i in 1..n {
  for j in 1..n {
    write(A(i,j).locale.id, " ");
  }
  writeln();
}

var j = 1;
for a in A {
  a = j;
  j += 1;
}
writeln();
writeln("initialized array");
writeln(A);

forall i in Dom with (ref A) do {
  A(i) = 0;
}

writeln();
writeln("parallel zeroed array");
writeln(A);

forall a in A do {
  a = 1;
}

writeln();
writeln("parallel array iteration");
writeln(A);
