// This test is intended to verify that valgrind is working by explicitly
// accessing memory that hasn't been allocated

use CTypes;

proc main() {
  var c = allocate(int, 1);
  writeln(c[1]);            // invalid read
}
