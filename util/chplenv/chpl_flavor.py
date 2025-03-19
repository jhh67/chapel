#!/usr/bin/env python3
import sys

import overrides
from utils import memoize


@memoize
def get():
    return overrides.get('CHPL_FLAVOR', 'none')

def _main():
    flavor_val = get()
    sys.stdout.write("{0}\n".format(flavor_val))


if __name__ == '__main__':
    _main()
