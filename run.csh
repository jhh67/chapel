#!/usr/bin/tcsh -fx

if ($#argv != 4) then
    echo Usage: cmd args nodes output
    exit 1
endif

set cmd = $1
set args = $2
set nodes = $3
set output = $4

if (! -e "$cmd") then
    echo $cmd not found, skipping
    exit 0
endif

if (-e $output) then
    echo $output exists, skipping
    exit 0
endif

echo $argv >& $output
printenv | grep GASNET_ >>& $output
./$cmd -nl $nodes -v $args >>& $output
if ($status) then
    set rc = $status
    echo "Experiment failed: " $rc
    exit $rc
endif

