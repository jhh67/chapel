#!/usr/bin/tcsh -fx

set cmd=ra-rmo
set cargs=(-sverify=false -suseOn=false -sN_U='2**(n-12)')
#set args="--dry-run"
set args=""
set source=test/release/examples/benchmarks/hpcc/ra.chpl
source common.csh

