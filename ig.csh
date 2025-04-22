#!/usr/bin/tcsh -fx

set cmd=ig
set cargs="-sN=10000000 -suseBlockArr=true"
#set args="--dry-run"
set args="-sM=2000000"
set source=test/studies/bale/aggregation/ig.chpl
source common.csh

