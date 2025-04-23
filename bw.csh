#!/usr/bin/tcsh -fx
r
set cmd=bw
set cargs=(--cc-warnings --no-cache-remote)
set args=(--numTrials=3 --sizePerTask=131072)
set source=test/performance/comm/low-level/simpleBandwidth.chpl
source common.csh

