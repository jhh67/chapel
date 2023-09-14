#!/usr/bin/env bash
#
CWD=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)
source $CWD/common.bash

export CHPL_NIGHTLY_TEST_CONFIG_NAME="jhh-scratch"

$CWD/nightly -cron -hello ${nightly_args}
