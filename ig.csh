#!/usr/bin/tcsh -fx

set cmd=ig
set cargs="-sN=10000000 -suseBlockArr=true"
#set args="--dry-run"
#set args="-sM=2000000"
set ts = `expr 8 "*" 1024 "*" 1024 "*" 1024` # number of table entries
set nu = `expr 4 "*" 1024 "*" 1024 "*" 1024` # number of updates
set args="-snumUpdates=$nu -stableSize=$ts"
set source=test/studies/bale/aggregation/ig.chpl
source common.csh

