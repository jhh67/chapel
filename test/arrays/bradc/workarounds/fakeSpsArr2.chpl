record sps33 {
  var data:[-1..1, 0..1] real;
  var irv: real = 0.0;

  proc ref this(i, j) ref {
    if (i == j) {
      halt("Assigning an IRV value");
    } else if (i==-1) {
      return data(i, j==1);
    } else {
      return data(i, j!=-1);
    }
  }
  proc this(i, j) {
    if (i == j) {
      return irv;
    } else if (i==-1) {
      return data(i, j==1);
    } else {
      return data(i, j!=-1);
    }
  }


  proc this(ij: 2*int) ref {
    return this(ij(1), ij(2));
  }
}

iter SpsStencDom() {
  for (i,j) in {-1..1, -1..1} do
    if (i != j) then
      yield (i,j);
}


var a: sps33;

for (i,j) in SpsStencDom() {
  a(i,j) = (i+1)*3 + j+2;
}

for i in -1..1 {
  for j in -1..1 {
    write(a(i,j), " ");
  }
  writeln();
}
