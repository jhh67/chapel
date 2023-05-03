#!/usr/bin/env python3

"""
Locale-per-socket tests. Usage: ./lps_test.py. The -v flag prints
verbose output, the -f flag will cause testing to stop when the
first test fails.
"""

import unittest
import subprocess
import os
import sys
from pprint import pprint

if not 'CHPL_HOME' in os.environ:
    print('CHPL_HOME is not set')
    sys.exit(1)

sys.path.append(os.path.join(os.environ['CHPL_HOME'], 'util', 'chplenv'))
import printchplenv


verbose = False
skipReason = None

def runCmd(cmd, env=None):
    if type(cmd) is str:
        cmd = cmd.split()
    if env is None:
        proc = subprocess.run(cmd, text=True, check=True,
            stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    else:
        proc = subprocess.run(cmd, text=True, check=True, env=env,
            stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    return proc.stdout

def skipif():
    global skipReason

    # Get the Chapel configuration
    printchplenv.compute_all_values()
    # strip the padding printchplenv puts on some of the keys
    env = {k.strip():v for k,v in printchplenv.ENV_VALS.items()}

    # Verify Chapel configuration
    # These tests only run on comm=ofi and slurm-srun
    if env.get('CHPL_LAUNCHER', None) != 'slurm-srun':
        skipReason = "CHPL_LAUNCHER != slurm-srun"
        return
    if env.get('CHPL_COMM', None) != 'ofi':
        skipReason = "CHPL_COMM != ofi"
        return

class LocalePerSocket(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        global verbose
        cmd = ["sinfo", "--format=%X %Y %Z %i", "--noheader", "--exact"]
        partition = os.environ.get('CHPL_LAUNCHER_PARTITION')
        if partition is not None:
            cmd += ["--partition", partition]
            if verbose:
                print("Partition: ", partition)

        output = runCmd(cmd)
        if output.startswith("Invalid node format specification: i"):
            # sinfo doesn't support %i (reservation name)
            cmd[1] = "--format=%X %Y %Z"
            output = runCmd(cmd)
        for line in output.splitlines():
            fields = line.split()
            # skip lines with reservation info
            if len(fields) == 3:
                (cls.sockets, cls.cores, cls.threads) = \
                    [int(i) for i in fields]
                break

        if verbose:
            print("Sockets: ", cls.sockets)
            print("Cores/Socket: ", cls.cores)
            print("Threads/Core: ", cls.threads)

        # We need the qthread output
        os.environ['QTHREAD_INFO'] = '2'

        # Should not be set by default
        if 'CHPL_RT_LOCALES_PER_NODE' in os.environ:
            del os.environ['CHPL_RT_LOCALES_PER_NODE']

        # Compile the test program
        cmd = 'chpl lps_test.chpl'
        if verbose:
            print("Compiling test program")
            print(cmd)
        runCmd(cmd)
        if verbose:
            print("Running tests")

    def setUp(self):
        if skipReason is not None:
            self.skipTest(skipReason)

    def runCmd(self, cmd, env = None):
        return runCmd(cmd, env)

    def getCores(self, socket, reserved = 0):
        if socket == "all":
            return ':'.join([self.getCores(i)
                            for i in range(0,self.sockets)])
        else:
            return ':'.join([str(i + (socket * self.cores))
                            for i in range(0,self.cores-reserved)])

    def getThreads(self, socket, reserved = 0):
        if socket == "all":
            return ':'.join([self.getCores(i, reserved)
                        for i in range(0,self.sockets * self.threads)])
        return ':'.join([self.getCores(socket + i * self.sockets,
                        reserved) for i in range(0, self.threads)])

    # Check standard srun arguments
    def checkArgs(self, nodes, tasks, tasksPerNode, cpusPerTask,
                  cpuBind, output):
        self.assertIn('--nodes=%d' % nodes, output)
        self.assertIn('--ntasks=%d' % tasks, output)
        self.assertIn('--cpus-per-task=%d' % cpusPerTask, output)
        if (cpuBind != None):
            self.assertIn('--cpu-bind=%s' % cpuBind, output)
        else:
            self.assertNotIn('--cpu-bind', output)

    def mrAllocatedRequired(self):
        output = runCmd("fi_info -v")
        for line in output.splitlines():
            if "mr_mode" in line:
                if "FI_MR_ALLOCATED" in line:
                    return True
                else:
                    break
        return False

    def test_00_base(self):
        global cls
        output = self.self.runCmd("./lps_test -nl 2 -v")
        self.checkArgs(2, 2, 1, self.sockets * self.cores * self.threads,
                       None, output)
        self.assertIn('oversubscribed = False', output)
        self.assertIn('Using %d Shepherds' % (self.sockets * self.cores),
                      output)
        self.assertIn("QT_CPUBIND = " + self.getCores("all"),
                      output)

    def test_01_oversubscribed_env(self):
        # Being oversubscribed should have no effect on the number
        # of shepherds.
        if self.mrAllocatedRequired():
            self.skipTest("FI_MR_ALLOCATED is required by provider")
        env = os.environ.copy()
        env['CHPL_RT_OVERSUBSCRIBED'] = 'true'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(2, 2, 1, self.sockets * self.cores * self.threads,
                       None, output)
        self.assertIn('oversubscribed = True', output)
        self.assertIn('Using %s Shepherds' % (self.sockets * self.cores),
                      output)
        self.assertIn("QT_CPUBIND = " + self.getCores("all"), output)

    def test_02_two_lpn(self):
        # One locale per socket. Each locale only uses the cores in
        # its socket.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.sockets * self.cores, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('Using %s Shepherds' % self.cores, output)
        self.assertIn("QT_CPUBIND = " + self.getCores(0), output)
        self.assertIn("QT_CPUBIND = " + self.getCores(1), output)

    def test_03_four_lpn(self):
        # Four locales per node is an error if CHPL_RT_LOCALES_PER_NODE
        # is set.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '4'
        output = self.runCmd(['./lps_test', '-nl', '4', '-v'], env=env)
        self.assertIn('error: The number of locales on the node is '
                      'greater than the number of sockets (4 > 2).',
                      output)

    def test_04_one_locale(self):
        # One locale uses only the cores in its socket.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        output = self.runCmd(['./lps_test', '-nl', '1', '-v'], env=env)
        self.checkArgs(1, 1, 2, self.sockets * self.cores * self.threads,
                       'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('Using %s Shepherds' % self.cores, output)
        self.assertIn("QT_CPUBIND = " + self.getCores(0), output)

    def test_05_two_lpn_oversubscribed(self):
        # CHPL_RT_OVERSUBSCRIBED should have no effect when there is
        # one locale per socket
        if self.mrAllocatedRequired():
            self.skipTest("FI_MR_ALLOCATED is required by provider")
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        env['CHPL_RT_OVERSUBSCRIBED'] = 'true'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.sockets * self.cores, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('oversubscribed = True', output)
        self.assertIn('Using %s Shepherds' % self.cores, output)
        self.assertIn("QT_CPUBIND = " + self.getCores(0), output)
        self.assertIn("QT_CPUBIND = " + self.getCores(1), output)

    def test_06_no_ht(self):
        # If SLURM_HINT=nomultithread then the launcher should request
        # only one PU per core and the locales should only use the
        # same.
        env = os.environ.copy()
        env['SLURM_HINT'] = 'nomultithread'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(2, 2, 1, self.sockets * self.cores, None, output)
        self.assertNotIn('using socket', output)
        self.assertNotIn('using socket', output)
        self.assertIn('Using %s Shepherds' % (self.sockets * self.cores),
                      output)
        self.assertIn("QT_CPUBIND = " + self.getCores("all"), output)

    def test_07_two_lpn_no_ht(self):
        # If SLURM_HINT=nomultithread then each locale should only use one
        # PU per core.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        env['SLURM_HINT'] = 'nomultithread'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.sockets * self.cores, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('Using %s Shepherds' % self.cores, output)
        self.assertIn("QT_CPUBIND = " + self.getCores(0), output)
        self.assertIn("QT_CPUBIND = " + self.getCores(1), output)

    def test_08_ht_shepherds(self):
        # One worker per PU with hyperthreading.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        env['CHPL_RT_NUM_THREADS_PER_LOCALE'] = \
            '%s' % (self.sockets * self.cores)
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.sockets * self.cores, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('Using %s Shepherds' % (self.cores * self.threads),
                      output)
        self.assertIn("QT_CPUBIND = " + self.getThreads(0), output)
        self.assertIn("QT_CPUBIND = " + self.getThreads(1), output)

    def test_09_no_ht_ht_shepherds(self):
        # When SLURM_HINT=nomultithread and
        # CHPL_RT_NUM_THREADS_PER_LOCALE indicates to use
        # hyperthreading, the number of threads/shepherds should be
        # recuded to the number of cores.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        env['CHPL_RT_NUM_THREADS_PER_LOCALE'] = str(self.sockets * self.cores)
        env['SLURM_HINT'] = 'nomultithread'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.cores * self.threads, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('Using %s Shepherds' % self.cores, output)
        self.assertIn("QT_CPUBIND = " + self.getCores(0), output)
        self.assertIn("QT_CPUBIND = " + self.getCores(1), output)

    def test_10_reserved(self):
        # One core is reserved for the AM handler thread
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        env['CHPL_RT_COMM_OFI_DEDICATED_AMH_CORES'] = 'true'
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.sockets * self.cores, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('Using %s Shepherds' % (self.cores - 1), output)
        self.assertIn("QT_CPUBIND = " + self.getCores(0,1), output)
        self.assertIn("QT_CPUBIND = " + self.getCores(1,1), output)

    def test_11_ht_reserved(self):
        # One core is reserved for the AM handler thread when using
        # hyperthreading.
        env = os.environ.copy()
        env['CHPL_RT_LOCALES_PER_NODE'] = '2'
        env['CHPL_RT_COMM_OFI_DEDICATED_AMH_CORES'] = 'true'
        env['CHPL_RT_NUM_THREADS_PER_LOCALE'] = str(self.sockets * self.cores)
        output = self.runCmd("./lps_test -nl 2 -v", env=env)
        self.checkArgs(1, 2, 2, self.sockets * self.cores, 'none', output)
        self.assertIn('using socket 0', output)
        self.assertIn('using socket 1', output)
        self.assertIn('Using %d Shepherds' % (self.sockets * self.cores - 2),
                      output)
        self.assertIn("QT_CPUBIND = " + self.getThreads(0,1),
                      output)
        self.assertIn("QT_CPUBIND = " + self.getThreads(1,1),
                      output)

    @unittest.skip("should not be considered oversubscribed")
    def test_12_oversubscribed_no_env(self):
        # Detect and allow oversubscription w/out CHPL_RT_OVERSUBSCRIBED
        # and CHPL_RT_LOCALES_PER_NODE set.
        env = os.environ.copy()
        env['PMI_MAX_KVS_ENTRIES'] = '20'
        env['PMI_NO_PREINITIALIZE'] = 'y'
        output = self.runCmd(['srun', '-l', '--quiet', '--nodes=1',
                    '--ntasks=3',
                    '--ntasks-per-node=3', '--cpus-per-task=16',
                    '--exclusive', '--kill-on-bad-exit',
                    './lps_test_real', '-nl', '3', '-v'], env=env)
        self.assertIn('oversubscribed = True', output)
        self.assertIn('Using 8 Shepherds', output)

def main(argv):
    global verbose
    failfast = False
    if "-f" in argv:
        failfast = True
        argv.remove("-f")
    if "-v" in argv:
        verbose = True

    skipif()

    prog = unittest.main(argv=argv, failfast=failfast)

    # Produce output that start_test can parse. To start_test this is a single
    # test. Report report success if all tests succeeded, an error if any
    # test failed, and nothing if all tests were skipped.

    if len(prog.result.skipped) > 0:
        print("Skipped %d tests" % len(prog.result.skipped))
    if len(prog.result.skipped) != prog.result.testsRun:
        if len(prog.result.errors) > 0 or len(prog.result.failures) > 0:
            print("[Error running tests]")
        else:
            print("[Success matching test results]")

if __name__ == '__main__':
    main(sys.argv)

