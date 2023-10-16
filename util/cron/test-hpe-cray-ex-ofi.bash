#!/usr/bin/env bash

CWD=$(cd $(dirname $0) ; pwd)

source $CWD/common.bash
source $CWD/common-ofi.bash || \
  ( echo "Could not set up comm=ofi testing." && exit 1 )
source $CWD/common-hpe-cray-ex.bash

export CHPL_COMM_DEBUG=1
export CHPL_RT_COMM_OFI_DEBUG=cfg,cfg-av,prov,prov-all,prov-hints,slingshot
export SLURM_LABELIO=1

export CHPL_NIGHTLY_TEST_CONFIG_NAME="hpe-cray-ex-ofi"

nightly_args="${nightly_args} -no-buildcheck -multilocale"

$CWD/nightly -cron -examples ${nightly_args}
