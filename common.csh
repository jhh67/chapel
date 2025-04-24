#!/usr/bin/tcsh -fx

if (! $?args) set args=""
if (! $?cargs) set cargs=""

echo args $args
echo cargs "$cargs"

set nodes=2
unsetenv CHPL_FLAVOR
unsetenv GASNET_IBV_PORTS*
setenv GASNET_IBV_PORTS_VERBOSE 2
setenv GASNET_IBV_LIST_PORTS 1
#setenv GASNET_TRACEFILE stderr
#setenv GASNET_IBV_TRACEMASK I

#setenv GASNET_NETWORKDEPTH_PP 100
#setenv GASNET_AM_CREDITS_PP 100

set port0=mlx5_0
set port1=mlx5_4
set ports=${port0}+${port1}

set dir = results/$cmd
mkdir -p $dir

if (! -e ${cmd}_real) then
    chpl -o $cmd --fast $cargs:q $source
    if ($status) then
        echo "Compilation failed"
        exit $status
    endif
endif

if (( $?do_pshm) && (! -e ${cmd}-pshm_real)) then
    env CHPL_FLAVOR=pshm chpl -o $cmd --fast $cargs:q  $source -o ${cmd}-pshm
    if ($status) then
        echo "Compilation failed"
        exit $status
    endif
endif

echo One locale, one NIC

setenv GASNET_IBV_PORTS $port0

./run.csh "$cmd" "$args" "$nodes" "$dir/1-1.out" || exit $status

echo One locale, two NICs

setenv GASNET_IBV_PORTS_TYPE HRank
setenv GASNET_IBV_PORTS $ports

./run.csh "$cmd" "$args" "$nodes" "$dir/1-2.out" || exit $status

echo One locale, one socket, one NIC

setenv GASNET_IBV_PORTS $port0

./run.csh "$cmd" "$args" "${nodes}x1s" "$dir/1s-1.out" || exit $status

# One locale, one socket, two NICs

setenv GASNET_IBV_PORTS $ports

./run.csh "$cmd" "$args" "${nodes}x1s" "$dir/1s-2.out" || exit $status

# Two locales, one shared NIC

setenv GASNET_IBV_PORTS $port0

./run.csh "$cmd" "$args" "${nodes}x2" "$dir/2-1.out" || exit $status
./run.csh "${cmd}-pshm" "$args" "${nodes}x2" "$dir/2-1-pshm.out" || exit $status

echo Two locales, each with its own NIC

unsetenv GASNET_IBV_PORTS
setenv GASNET_IBV_PORTS_TYPE HRank
setenv GASNET_IBV_PORTS_0 $port0
setenv GASNET_IBV_PORTS_1 $port1

./run.csh "$cmd" "$args" "${nodes}x2" "$dir/2-2.out" || exit $status
./run.csh "${cmd}-pshm" "$args" "${nodes}x2" "$dir/2-2-pshm.out" || exit $status

echo Two locales, two shared NICs

unsetenv GASNET_IBV_PORTS_TYPE
unsetenv GASNET_IBV_PORTS_0
unsetenv GASNET_IBV_PORTS_1
setenv GASNET_IBV_PORTS  $ports

./run.csh "$cmd" "$args" "${nodes}x2" "$dir/2-2s.out" || exit $status
./run.csh "${cmd}-pshm" "$args" "${nodes}x2" "$dir/2-2s-pshm.out" || exit $status

