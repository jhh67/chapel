proc f(x:enum) {
  writeln(x);
}

enum e {a=1};

var a:sync e = e.a;
f(a.readFE());

proc g(x:integral) {
  writeln(x);
}
