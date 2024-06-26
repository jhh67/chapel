use Sort, Sort.ShellSort;

proc test(ref X) {
  writeln("[", X.domain, " (", X.domain.idxType:string, ")] int");
  var Y = X;
  writeln("unsorted: ", X);
  shellSort(X);
  writeln("s-sorted: ", X);
  sort(Y);
  writeln("  sorted: ", Y);
  writeln();
  assert(isSorted(X));
  assert(isSorted(Y));
}

proc testsize(param s) {
  var A : [1:uint(s)..10:uint(s)] int;
  forall i in A.domain with (ref A) do
    A[i] = (10-i):int;

  test(A);

  var B : [1:uint(s)..254:uint(s)] int;
  forall i in B.domain with (ref B) do
    B[i] = (B.sizeAs(i.type)-i):int;

  test(B);

  var C : [-63:int(s)..63:int(s)] int;
  forall i in C.domain with (ref C) do
    // avoid questions of integer wraparounds by doing math using uints
    C[i] = (C.sizeAs(uint(s))-i:uint(s)):int(s);

  test(C);
}

testsize(8);
testsize(16);
testsize(32);
testsize(64);
