// chplvis: Begin Tasks

// Example 4, begin tasks as shown in chplvis
// This is a contrived example to have tasks live
// across a tagVdebug() call.

use VisualDebug;
use BlockDist;

const space =  { 0 .. #numLocales };
const Dspace = blockDist.createDomain(space);

startVdebug("E4");

var go: [Dspace] sync bool;
var done: [Dspace] sync bool;

// Start a begin task on all locales.  The task will start and then block.
coforall loc in Locales do
  on loc do begin { // start a async task

              go[here.id].readFF(); // Block until ready!
              writeln ("Finishing running the 'begin' statement on locale "
                       , here.id, ".");
              done[here.id].writeEF(true);
           }

tagVdebug("loc");

coforall loc in Locales do
    on loc do writeln("Hello from ", here.id);

tagVdebug("finish");

// Let all tasks go
go.writeEF(true);

// Wait until all tasks are finished
done.readFF();

stopVdebug();
