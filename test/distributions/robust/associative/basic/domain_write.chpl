use driver, driver_domains, driver_misc;
use Sort;

config const offset = 7;

for i in D {
  var myIdx = 2*i+offset;
  DomIntType += myIdx;
  DomUintType += myIdx:uintType;
  DomRealType += myIdx:realType;
  var s: string;
  s = myIdx:string;
  DomStringType += s;
}

writeln(Sort.sorted(DomIntType));
writeln(Sort.sorted(DomUintType));
writeln(Sort.sorted(DomRealType));
writeln(Sort.sorted(DomStringType));

