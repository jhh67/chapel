import Sort;
use printHelp;

var d : domain(int);
var a : [d] int;

d.add(2);
d.add(0);

a(2) = 7;
a(0) = 4;

writelnSorted(d);
writelnSortedByDom(a);

for i in Sort.sorted(d) do
  writeln(i, " -> ", a(i));
