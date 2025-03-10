// a test that eventually calls `isType` should not have warnings about `(?)`
// from https://github.com/chapel-lang/chapel/issues/25492
use Sort only defaultComparator, reverseComparator;
config param copyinit = false;

record heap {
    type eltType;
    type comparator = defaultComparator;

    proc init(type eltType, type comparator=defaultComparator) {
      this.eltType = eltType;
      this.comparator = comparator;
    }

    proc init=(other: this.type) where copyinit {
      this.eltType = this.type.eltType;
      this.comparator = this.type.comparator;
    }
}

var h1;
h1 = new heap(int, reverseComparator(?));
writeln(h1.type:string);
writeln(h1);
