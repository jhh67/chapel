UPCXX_GIT_REPO          ?=# Set to a git repo address to enable git-based fetch
UPCXX_EXTRAS_GIT_REPO   ?=# Set to a git repo address to enable git-based fetch
UPCXX_GIT_COMMIT        ?= develop
UPCXX_EXTRAS_GIT_COMMIT ?= develop
UPCXX_BLDDIR     ?= $(HARNESS_WORKDIR)/upcxx
UPCXX_INSTDIR    ?= $(HARNESS_WORKDIR)/upcxx-inst
UPCXX_TMPDIR     ?= $(HARNESS_WORKDIR)/upcxx-tmp
UPCXX_CONDUIT    ?= $(NETWORK)# Default to same conduit as the enclosing harness run
UPCXX_EXTRA_FLAGS ?=# extra flags to add to both compilers for lib and tests, may be set by pushbuild/end-user
UPCXX_EXTRA_TEST_FLAGS ?=# extra flags to add to tests (but not lib), may be set by pushbuild/end-user
UPCXX_TEST_FLAGS  ?=# per-test flags reserved for use by harness.conf
UPCXX_CONFIGURE_EXTRA ?=# extra flags to add to UPC++ configure command line
UPCXX_MAKE_J     ?= -j4 # concurrency of GNU Make steps
UPCXX_FC         ?= $(shell which gfortran)

# legacy harness support
GASNET_BLDDIR ?= $(TOP_BUILDDIR)/gasnet

# ensure all child invocations see the same conduit defined by UPCXX_CONDUIT,
# even if the enclosing environment contains conflicting values
export UPCXX_NETWORK := $(UPCXX_CONDUIT)
export UPCXX_GASNET_CONDUIT := $(UPCXX_CONDUIT)

# Options for providing GASNET:
# 1. set UPCXX_GASNET to an existing build path to use.
# The remaining options assume $(GASNET_BLDDIR) is a valid build dir
# 2. set UPCXX_GASNET to an existing source path to use.
#    This one notably implies this CI will configure and build GASNet.
# 3. set UPCXX_TARBALL_GASNET=1 to create a GASNet tarball and use it
#    This one notably implies this CI will configure and build GASNet.
# 4. Default is to point at the existing $(GASNET_BLDDIR) build.
#
# All three options will use the provided build directory only in the
# '_upcxx' test (the UPC++ configure step) and not after.
ifneq ($(strip $(UPCXX_GASNET)),)
  UPCXX_EXTERNAL_GASNET:=1
  CONFIGURE_GASNET:=$(strip $(UPCXX_GASNET))
ifeq ($(wildcard $(strip $(UPCXX_GASNET))/gasnet_config.h),)
  UPCXX_GASNET_SOURCES:=1
endif
else 
ifneq ($(strip $(UPCXX_TARBALL_GASNET)),)
  CONFIGURE_GASNET:=$(UPCXX_BLDDIR)/gasnet.tar.gz  # actual filename will vary
  UPCXX_GASNET_SOURCES:=1
else # default to using builddir
  CONFIGURE_GASNET:=$(GASNET_BLDDIR)
endif
endif
ifeq ($(UPCXX_GASNET_SOURCES),1)
  # UPCXX_GASNET=srcdir and UPCXX_TARBALL_GASNET configure GASNet
  CONFIGURE_FRAGMENTS:=$(GASNET_BLDDIR)
  # Don't pollute configure with harness flags
  UNSET_VARS = CFLAGS CXXFLAGS CPPFLAGS LDFLAGS LIBS
endif
CONFIGURE_FRAGMENTS ?= $(CONFIGURE_GASNET)
UPCXX_TESTMODE  ?= wrap

HARNESS_LOGDIR    ?= .
LOGFILE = $(HARNESS_LOGDIR)/upcxx.log
TO_LOG = >> $(LOGFILE) 2>&1

# Various UPC++ scripts require bash
SHELL := /bin/bash
PIPEEXIT := ; ( exit $${PIPESTATUS[0]} ) # bashism to preserve first exit code in a pipe

# Paths and options for standard tools
WGET              ?= wget -nv
GZCAT             ?= gzip -cd
TAR               ?= tar
UNZIP             ?= unzip
P7ZIP             ?= 7za
GIT               ?= git
PERL              ?= perl  # only used in the check-testsuite target

# GASNET_CODEMODE currently simply follows UPCXX_CODEMODE
GASNET_CODEMODE=$(UPCXX_CODEMODE)

# Logic to extract GASNet's compiler variables.
# intentionally ignore the environment here because it is set by harness
# use UPCXX_TEST_ENV to override if necessary.
# We use a sub-shell to avoid pulling in the entire makefile fragment.
# TODO: may want to handle LDFLAGS here as well?
GASNET_VARS = $(shell $(MAKE) --no-print-directory echovars FRAGMENT=$(strip $(UPCXX_CONDUIT)))
FRAGMENT=#empty by default
ifneq ($(FRAGMENT),) # use any fragment we can find
-include $(CONFIGURE_FRAGMENTS)/$(FRAGMENT)-conduit/$(FRAGMENT)-seq.mak
-include $(CONFIGURE_FRAGMENTS)/$(FRAGMENT)-conduit/$(FRAGMENT)-par.mak
echovars: force; @echo "CC='$(GASNET_CC)' CXX='$(GASNET_CXX)'"
.PHONY: echovars
endif

ifneq ($(strip $(UPCXX_TEST_ENV)),)
DO_ENV := export $(UPCXX_TEST_ENV)
else
DO_ENV := : # empty command to be safely preceded or followed by '&&' or ';'
endif

CONFIGURE_ENV = \
	export $(GASNET_VARS) && $(DO_ENV) && \
        export CC="$$CC $(strip $(UPCXX_EXTRA_FLAGS))" CXX="$$CXX $(strip $(UPCXX_EXTRA_FLAGS))"

# UPCXX_EXTRA_FLAGS must be applied on three distinct paths:
#
# 1. When building libupcxx (LIB_BUILD_ENV)
#    If NOT configuring GASNet, then UPCXX_EXTRA_FLAGS needs to appear
#    in the MANUAL_{C,CXX}FLAGS when libupcxx is built, otherwise the
#    setting of CONFIGURE_ENV, above, is sufficient
ifneq ($(strip $(UPCXX_EXTRA_FLAGS)),)
ifneq ($(UPCXX_GASNET_SOURCES),1)
LIB_BUILD_ENV = env MANUAL_CFLAGS="$(strip $(UPCXX_EXTRA_FLAGS))" MANUAL_CXXFLAGS="$(strip $(UPCXX_EXTRA_FLAGS))"
endif
endif
#
# 2. When building tests via inst-test, wrap-test or using CMake
#    This is handled by upcxx-meta, which will record the configure-time
#    values of CC and CXX even when this CI is not configuring GASNet
#
# 3. When building make-based tests (MAKE_TEST_ENV)
#    Handled by setting CC and CXX to their values reported by upcxx-meta
MAKE_TEST_ENV = \
	    CC="$$($(UPCXX_INSTDIR)/bin/upcxx-meta CC)" \
	   CXXFLAGS="$(UPCXX_EXTRA_TEST_FLAGS) $(UPCXX_TEST_FLAGS)" \
	   CXX="$$($(UPCXX_INSTDIR)/bin/upcxx-meta CXX) $(UPCXX_EXTRA_TEST_FLAGS) $(UPCXX_TEST_FLAGS)" \
	   UPCXX_INSTALL=$(UPCXX_INSTDIR)

# Parametrized support for download/unpack
UPCXX_DOWNLOAD ?=# one of "unzip", "p7zip" or "tgz", default to auto-detect from downloaded archive suffix
upcxx_dl_suffix_unzip := .zip
upcxx_dl_suffix_p7zip := .zip
upcxx_dl_suffix_tgz   := .tar.gz
upcxx_dl_suffix=$(upcxx_dl_suffix_$(strip $(UPCXX_DOWNLOAD)))
ifeq ($(strip $(upcxx_dl_suffix)),)
upcxx_dl_suffix := .zip
endif

#UPCXX_URL      ?= https://upc-bugs.lbl.gov/nightly/unlisted/berkeleylab-upcxx-$(UPCXX_GIT_COMMIT)$(upcxx_dl_suffix)
UPCXX_URL      ?= https://bitbucket.org/berkeleylab/upcxx/get/$(UPCXX_GIT_COMMIT)$(upcxx_dl_suffix)
#UPCXX_EXTRAS_URL  ?= https://upc-bugs.lbl.gov/nightly/unlisted/berkeleylab-upcxx-extras-$(UPCXX_EXTRAS_GIT_COMMIT).tar.gz
UPCXX_EXTRAS_URL  ?= https://bitbucket.org/berkeleylab/upcxx-extras/get/$(UPCXX_EXTRAS_GIT_COMMIT)$(upcxx_dl_suffix)

VERSION_FILE=$(HARNESS_LOGDIR)/git_$(PRODUCT)
upcxx-download: force
	rm -Rf $(DESTDIR) $(UPCXX_TMPDIR) && mkdir $(UPCXX_TMPDIR)
	@if test -n "$(GIT_REPO)" ; then \
	    set -x ; cd $(UPCXX_TMPDIR) && $(GIT) archive --remote=$(GIT_REPO) --format=zip --prefix=git-archive/ --output=git-archive.zip $(GIT_COMMIT) || exit 2 ; \
	 elif ( expr $(URL) : file:/ || expr /$(URL) : // ) >/dev/null; then \
	    set -x ; cd $(UPCXX_TMPDIR) && ln -s $(URL:file:%=%) . ; \
	 else \
	    set -x ; cd $(UPCXX_TMPDIR) && $(WGET) $(URL) 2>&1 || ( cat wget-log 2> /dev/null ; exit 3 ) || exit $$? ; \
	 fi
	cd $(UPCXX_TMPDIR) && cat wget-log 2> /dev/null ; rm -f wget-log ; exit 0
	@UPCXX_TESTDIR=`pwd` && \
	 cd $(UPCXX_TMPDIR) && UPCXX_ARCHIVE=`/bin/ls` && UPCXX_DOWNLOAD="$(strip $(UPCXX_DOWNLOAD))" && \
	 if test -z "$$UPCXX_DOWNLOAD" ; then \
	   case "$$UPCXX_ARCHIVE" in \
	     *.zip)          UPCXX_DOWNLOAD=unzip ;; \
	     *.p7z|*.7z)     UPCXX_DOWNLOAD=p7zip ;; \
	     *.tar.gz|*.tgz) UPCXX_DOWNLOAD=tgz   ;; \
	     *) echo "ERROR: Unknown archive suffix on '$$UPCXX_ARCHIVE': Set UPCXX_DOWNLOAD=(unzip,p7zip,tgz)" ; exit 1; \
	   esac \
	 fi && \
	 echo Fetched $$UPCXX_ARCHIVE : UPCXX_DOWNLOAD=$$UPCXX_DOWNLOAD && \
	 $(MAKE) -f $$UPCXX_TESTDIR/Makefile upcxx-unpack-$$UPCXX_DOWNLOAD UPCXX_ARCHIVE="$$UPCXX_ARCHIVE" && \
	 rm -f $(UPCXX_TMPDIR)/$$UPCXX_ARCHIVE
	mv $(UPCXX_TMPDIR)/* $(DESTDIR) # archive's root dir will vary
	rmdir $(UPCXX_TMPDIR)
	@echo "$(PRODUCT) version: `cat $(VERSION_FILE) 2>/dev/null`"
	@if grep -q '^#define' $(DESTDIR)/src/git_version.h 2>/dev/null ; then \
	  ver=`grep '^#define' $(DESTDIR)/src/git_version.h | cut -f3 -d' '` ; \
	  if test -n "$$ver" ; then \
	    echo "$$ver" > $(VERSION_FILE) ; \
	    echo "$(PRODUCT) describe: $$ver" ; \
	  fi; \
	fi
# Three ways to unpack the archive:
#  Option 1: "unzip" - .zip w/ unzip
#   This is the favored approach because it gives us the hash and uses a widely available utility.
upcxx-unpack-unzip: force; $(UNZIP) -qz $(UPCXX_ARCHIVE) > $(VERSION_FILE) && $(UNZIP) -q $(UPCXX_ARCHIVE)
#  Option 2: "p7zip" - .zip w/ 7za (from p7zip package)
#   This also gives us the hash, but uses a less widely available utility.
#   However, it is sometimes necessary because many unzip installations contain a bug w.r.t. symlinks
upcxx-unpack-p7zip: force
	$(P7ZIP) x -bd $(UPCXX_ARCHIVE) 2>&1 | tee -a $(VERSION_FILE).p7z $(PIPEEXIT)
	@-grep 'Comment = ' $(VERSION_FILE).p7z | cut -f3 -d' ' > $(VERSION_FILE)
#  Option 3: "tgz" - tar + gzip
#   This is the most portable, but cannot extract the hash unless git is available
upcxx-unpack-tgz:   force
	@-$(GZCAT) $(UPCXX_ARCHIVE) | $(GIT) get-tar-commit-id > $(VERSION_FILE) ; exit 0
	$(GZCAT) $(UPCXX_ARCHIVE) | $(TAR) xf -
####
.PHONY: upcxx-download upcxx-unpack-unzip upcxx-unpack-p7zip upcxx-unpack-tgz

# Symlink or simple script that corresponds to
#    RunCmd = ./launcher -np %N %P %A
launcher:
	-rm -f $@
	@UPCXXRUN=$(UPCXX_INSTDIR)/bin/upcxx-run; \
	 if test -f $$UPCXXRUN ; then set -x ; \
	   ln -s $$UPCXXRUN $@ ; \
	 else \
	   echo "ERROR: $$UPCXXRUN is missing" ; exit 1 ; \
	 fi 

# similar for MPI progs
# best-effort when missing mpi-conduit:
# 1. leverage conduit's launcher
#    a. some conduit's gasnetrun_ may be a valid mpi launcher
#    b. other conduit's may support mpi-spawner
# 2. final fallback is mpirun
launcher-mpi:
	-rm -f $@
	@gasnet_bindir=$(UPCXX_INSTDIR)/gasnet.$(GASNET_CODEMODE)/bin; \
	 if test -x $$gasnet_bindir/gasnetrun_mpi ; then \
	  set -x ; ln -s $$gasnet_bindir/gasnetrun_mpi $@ ; \
	 else \
	  conduit_launcher=$$gasnet_bindir/gasnetrun_$(UPCXX_CONDUIT); \
	  case "$(UPCXX_CONDUIT)" in \
	    *) \
	      if test -r $$conduit_launcher-mpi.pl ; then \
	        mpi_launcher="$$conduit_launcher -spawner=mpi"; \
	      else \
	        mpi_launcher=mpirun; \
	      fi; \
	      set -x; \
	      echo '#!/bin/sh' > $@ ; \
	      echo "exec $$mpi_launcher" '"$$@"' >> $@ ; \
	      echo 'echo "ERROR: failed to find mpirun, gasnetrun_mpi or a conduit-specific alternative." ; exit 1' >> $@ ; \
	      chmod +x $@ \
	      ;; \
	  esac; \
	fi

_upcxx: force
	-rm -Rf upcxx-built upcxx-install launcher launcher-mpi $(LOGFILE)
	echo ======== UPCXX download ======== | tee $(LOGFILE) $(PIPEEXIT)
	( set -x ; $(MAKE) upcxx-download PRODUCT=upcxx URL=$(UPCXX_URL) GIT_REPO=$(UPCXX_GIT_REPO) GIT_COMMIT=$(UPCXX_GIT_COMMIT) DESTDIR=$(UPCXX_BLDDIR) ) 2>&1 | tee -a $(LOGFILE) $(PIPEEXIT)
	echo ======== UPCXX EXTRAS download ======== | tee -a $(LOGFILE) $(PIPEEXIT)
	( set -x ; $(MAKE) upcxx-download PRODUCT=upcxx_extras URL=$(UPCXX_EXTRAS_URL) GIT_REPO=$(UPCXX_EXTRAS_GIT_REPO) GIT_COMMIT=$(UPCXX_EXTRAS_GIT_COMMIT) DESTDIR=$(UPCXX_BLDDIR)/extras ) 2>&1 | tee -a $(LOGFILE) ; exit 0 # deliberately ignore failures
	@echo UPCXX_GASNET=$(UPCXX_GASNET) UPCXX_BLDDIR=$(UPCXX_BLDDIR) $(TO_LOG)
	@echo CONFIGURE_GASNET=$(CONFIGURE_GASNET) CONFIGURE_FRAGMENTS=$(CONFIGURE_FRAGMENTS) $(TO_LOG)
	@if test -n "$(UPCXX_EXTERNAL_GASNET)" ; then \
	  echo ======== UPCXX_GASNET:external ========; set -x; \
	elif test -n "$(UPCXX_TARBALL_GASNET)" ; then \
	  echo ======== UPCXX_GASNET:tarball ========; set -x; \
	  $(MAKE) dist -C $(GASNET_BLDDIR) ; \
	else \
	  echo ======== UPCXX_GASNET:builddir ========; set -x; \
	fi $(TO_LOG)
	-echo PATH="$$PATH" $(TO_LOG)
	@-( set -x; $(CONFIGURE_ENV) ; $$CC  --version ) 2>&1 | egrep -i -v -e error -e warning $(TO_LOG)
	@-( $(CONFIGURE_ENV) ; set -x ; $$CXX --version ) 2>&1 | egrep -i -v -e error -e warning $(TO_LOG)
	@-( $(CONFIGURE_ENV) ; set -x ; $(MAKE) --version ) 2>&1 | egrep -i -v -e error -e warning $(TO_LOG)
	@-( $(CONFIGURE_ENV) ; set -x ; $(CMAKE) --version ) 2>&1 | egrep -i -v -e error -e warning $(TO_LOG)
	@( echo ======== Configure UPCXX ========; set -x; \
	   if test -n "$(UPCXX_TARBALL_GASNET)" ; then \
	     gasnet=`ls -1t $(GASNET_BLDDIR)/GASNet-*.tar.gz | head -1` ; \
	   else \
	     gasnet=$(CONFIGURE_GASNET); \
	   fi ; \
	   cd $(UPCXX_BLDDIR) && $(CONFIGURE_ENV) && \
	     $(UPCXX_BASH) ./configure --prefix=$(UPCXX_INSTDIR) --with-gasnet=$$gasnet \
	                 --disable-auto-conduit-detect --with-default-network=$(UPCXX_CONDUIT) \
	                 --enable-single=$(GASNET_CODEMODE) $(UPCXX_CONFIGURE_EXTRA) || exit 1; \
	) $(TO_LOG)
	@( echo ======== Build UPCXX RT libs ========; set -x; \
	   $(LIB_BUILD_ENV) \
	   $(MAKE) $(UPCXX_MAKE_J) -C $(UPCXX_BLDDIR) all || exit 1; \
	) $(TO_LOG)
	@touch upcxx-built
	@echo '#!/bin/sh' > $@ ; chmod +x $@

_upcxx-inst: upcxx-built
	rm -Rf $(UPCXX_INSTDIR) $@
	@( echo ======== UPCXX install ========; set -x; \
	   $(MAKE) -C $(UPCXX_BLDDIR) $(UPCXX_MAKE_J) install || exit 1; ) $(TO_LOG)
	/bin/ls -alR $(UPCXX_INSTDIR) $(TO_LOG)
	$(UPCXX_INSTDIR)/bin/upcxx-info $(TO_LOG)
	@echo "NOTE: Please ignore expected 'Config file not found' messages above " $(TO_LOG)
	$(MAKE) launcher launcher-mpi 2>&1 | tee -a $(LOGFILE) $(PIPEEXIT)
	@touch upcxx-install
	@echo '#!/bin/sh' > $@ ; chmod +x $@

_upcxx-smoke_test: upcxx-built
	@( echo ======== UPCXX make check ========; set -x; \
	   $(MAKE) -C $(UPCXX_BLDDIR) $(UPCXX_MAKE_J) check || exit 1; ) $(TO_LOG)
	@echo '#!/bin/sh' > $@ ; chmod +x $@

# Build a single test from the installed UPCXX directory
inst_test: upcxx-install
	@set -x ; $(DO_ENV) && \
	source $(UPCXX_INSTDIR)/bin/upcxx-meta SET ; \
	$$CXX $$CXXFLAGS $$CPPFLAGS $$LDFLAGS -o $(TEST_EXE) $(TEST_PATH) $(UPCXX_EXTRA_TEST_FLAGS) $(UPCXX_TEST_FLAGS) $$LIBS

# Build a single test using the upcxx wrapper
wrap_test: upcxx-install
	@set -x ; $(DO_ENV) && \
	$(UPCXX_INSTDIR)/bin/upcxx -o $(TEST_EXE) $(TEST_PATH) $(UPCXX_EXTRA_TEST_FLAGS) $(UPCXX_TEST_FLAGS)

# Build a single test using the dev-tests target in the UPC++ Makefile (only valid for in-repo tests)
make_test: upcxx-install
	@set -x ; $(DO_ENV) && \
	$(MAKE) -C $(UPCXX_BLDDIR) $(UPCXX_MAKE_J) dev-tests-$(GASNET_CODEMODE) NETWORKS=$(UPCXX_CONDUIT) \
	           TESTS=^test-$(TEST_EXE) EXTRAFLAGS="$(UPCXX_EXTRA_TEST_FLAGS) $(UPCXX_TEST_FLAGS)"
	@mv $(UPCXX_BLDDIR)/test-$(TEST_EXE)-$(GASNET_CODEMODE)-$(UPCXX_CONDUIT) $(TEST_EXE)

IGNORE_TESTS_PAT=neg-.+|getenv|promise_multiple_results|promise_reused|quiescence_failure|issue105|hello_via_shell
check-testsuite:
	$(MAKE) -C $(UPCXX_BLDDIR) $(UPCXX_MAKE_J) dev-tests-$(GASNET_CODEMODE) UPCXX_DRY_RUN=1 NETWORKS=$(UPCXX_CONDUIT) > check-testsuite.log
	@$(PERL) -ne 'BEGIN { open F, "harness.conf" or die $$!; while (<F>) { $$tests{$$1}=1 if (m/^TestName:\s*(\S+)/); }; }' \
	        -e 'if (m/^Compiling test-(.+)-(opt|debug)/) { if(not ($$tests{$$1} || $$1 =~ m/^($(IGNORE_TESTS_PAT))-(seq|par)/)) { print "$$1\n"; $$err=1; } }' \
		-e 'END { if ($$err) { print "ERROR: Tests above missing from harness.conf\n"; } else { print "SUCCESS\n"; } }' \
		< check-testsuite.log
	@echo '#!/bin/sh' > $@ ; chmod +x $@

VPATH = \
	$(UPCXX_BLDDIR)/test \
	$(UPCXX_BLDDIR)/test/ccs \
	$(UPCXX_BLDDIR)/test/uts \
	$(UPCXX_BLDDIR)/test/regression \
	$(UPCXX_BLDDIR)/example \
	$(UPCXX_BLDDIR)/example/prog-guide \
	$(UPCXX_BLDDIR)/example/compute-pi \
	$(UPCXX_BLDDIR)/example/serialization \
	$(UPCXX_BLDDIR)/bench \
	$(UPCXX_BLDDIR)/extras/extensions/allocator \
	$(UPCXX_BLDDIR)/extras/extensions/padded_device_allocator \
	$(UPCXX_BLDDIR)/extras/examples/rpc_ff_quiescence \
	$(UPCXX_BLDDIR)/extras/examples/vector_accumulate \
	$(UPCXX_BLDDIR)/extras/tutorials/2021-11/examples \
	$(UPCXX_BLDDIR)/extras/tutorials/2021-11/solutions

# strip off threadmode from target name and export it
%-seq :: force ; $(MAKE) UPCXX_THREADMODE=seq TEST_EXE=$@ $*-exe
%-par :: force ; $(MAKE) UPCXX_THREADMODE=par TEST_EXE=$@ $*-exe

# Pattern rule builds tests, using logic dependent on TESTMODE
%-exe :: %.cpp force
	@ UPCXX_TESTMODE="$(strip $(UPCXX_TESTMODE))" ; \
	if test "$$UPCXX_TESTMODE" = "meta" ; then set -x ; \
	  $(MAKE) inst_test TEST_PATH=$< ; \
	elif test "$$UPCXX_TESTMODE" = "wrap" ; then set -x ; \
	  $(MAKE) wrap_test TEST_PATH=$< ; \
	elif test "$$UPCXX_TESTMODE" = "make" ; then set -x ; \
	  $(MAKE) make_test ; \
	else \
	  echo "Unrecognized UPCXX_TESTMODE=$$UPCXX_TESTMODE" ; exit 100; \
	fi 

# tests/ccs
ccs-%-exe :: ccs-%.sh force
	@set -x ; $(DO_ENV) && \
	$(MAKE) -C $(UPCXX_BLDDIR) $(UPCXX_MAKE_J) dev-tests-$(GASNET_CODEMODE) NETWORKS=$(UPCXX_CONDUIT) \
	           TESTS=^test-ccs-$*-$(UPCXX_THREADMODE) EXTRAFLAGS="$(UPCXX_EXTRA_TEST_FLAGS) $(UPCXX_TEST_FLAGS)"
	set -e -x; \
	longname="test-ccs-$*-$(UPCXX_THREADMODE)-$(GASNET_CODEMODE)-$(UPCXX_CONDUIT)"; \
	rm -Rf ./$$longname $(TEST_EXE) $(TEST_EXE).runcmd; \
	if test -e $(UPCXX_BLDDIR)/$$longname.runcmd ; then \
	  mv $(UPCXX_BLDDIR)/$$longname .; \
	  mv $(UPCXX_BLDDIR)/$$longname.runcmd $(TEST_EXE).runcmd; \
	  ln -sf $$longname $(TEST_EXE); \
	else \
	  mv $(UPCXX_BLDDIR)/$$longname $(TEST_EXE); \
	fi

# upcxx-examples guppie
guppie-%-exe :: $(UPCXX_BLDDIR)/extras/examples/gups/upcxx upcxx-install force
	@set -x ; env $(MAKE_TEST_ENV) $(MAKE) -C $< clean guppie-$*
	mv $</guppie-$* $(TEST_EXE)

# upcxx-examples dist_array
DA-%-exe :: $(UPCXX_BLDDIR)/extras/extensions/dist_array upcxx-install force
	@set -x ; env $(MAKE_TEST_ENV) $(MAKE) -C $< clean bin/DA-$*
	-ln -sf $</examples . # for examples/input file
	mv $</bin/DA-$* $(TEST_EXE)

# upcxx-examples jac3d
jac3d-exe :: $(UPCXX_BLDDIR)/extras/examples/jac3d upcxx-install force
	@set -x ; env $(MAKE_TEST_ENV) $(MAKE) -C $< clean jac3d
	mv $</jac3d $(TEST_EXE)

# upcxx-examples laplace2d
laplace2d-exe :: $(UPCXX_BLDDIR)/extras/examples/laplace2d upcxx-install force
	@set -x ; env $(MAKE_TEST_ENV) $(MAKE) -C $< clean lap2D
	mv $</lap2D $(TEST_EXE)

# upcxx-examples cannon
canno%-exe :: $(UPCXX_BLDDIR)/extras/examples/cannon upcxx-install force
	@case "$@" in *-seq) export UPCXX_THREADMODE=seq ;; \
	              *-par) export UPCXX_THREADMODE=par ;; esac; \
	 set -x ; env $(MAKE_TEST_ENV) $(MAKE) -C $< clean canno$*
	mv $</canno$* $(TEST_EXE)

# upcxx-examples extend-add
extend-add_%-exe :: $(UPCXX_BLDDIR)/extras/examples/extend-add upcxx-install force
	@set -x ; \
	 SCALAPACK_HOME=$${SCALAPACK_HOME:-/usr/scalapack} ; \
	 SCALAPACK_LIBS=$${SCALAPACK_LIBS:--L$$SCALAPACK_HOME/lib -lscalapack -Wl,--rpath=$$SCALAPACK_HOME/lib} ; \
	 UPCXX_EXTENDADD_EXTRA=$${UPCXX_EXTENDADD_EXTRA:--Wno-unknown-pragmas} ; \
	 env $(MAKE_TEST_ENV) $(MAKE) -C $< UPCXX_INSTALL=$(UPCXX_INSTDIR) \
                       SCALAPACK_LIBS="$$SCALAPACK_LIBS" \
                       OPTIMIZATION="$(OPT) $$UPCXX_EXTENDADD_EXTRA" \
                       clean extend-add_$*
	mv $</bin/extend-add_$* $(TEST_EXE)

KOKKOS_MAKE = env $(MAKE_TEST_ENV) $(MAKE) $(UPCXX_MAKE_J) -C $< CC= 
KOKKOS_ARCH ?= Maxwell52
export KOKKOS_ARCH
# upcxx-examples kokkos_montecarlo: clearing CC prevents a hang in Makefile.kokkos
kokkos_montecarl%-exe :: $(UPCXX_BLDDIR)/extras/examples/kokkos_montecarlo upcxx-install force
	@set -x ; export UPCXX_CODEMODE=$(UPCXX_CODEMODE) ; \
	 $(KOKKOS_MAKE) clean ; \
	 $(KOKKOS_MAKE) all ; \
	mv $</MC_DartSampler $(TEST_EXE)

# upcxx-examples kokkos_3dhalo: clearing CC prevents a hang in Makefile.kokkos
kokkos_3dhal%-exe :: $(UPCXX_BLDDIR)/extras/examples/kokkos_3dhalo upcxx-install force
	@set -x ; export UPCXX_CODEMODE=$(UPCXX_CODEMODE) ; \
	 $(KOKKOS_MAKE) clean ; \
	 $(KOKKOS_MAKE) all ; \
	mv $</*upcxx_heat_conduction $(TEST_EXE)

# UPC interop
upc-%-exe :: $(UPCXX_BLDDIR)/test/interop upcxx-install force
	@set -x ; env CFLAGS= $(MAKE_TEST_ENV) $(MAKE) -C $< OPTLVL= UPCC='$(UPCC)' \
	             UPCXX=$(UPCXX_INSTDIR)/bin/upcxx \
	             clean $*
	mv $</$* $(TEST_EXE)

# misc make-based examples
# cuda_vecadd, hip_vecadd :
%_vecadd-exe :: $(UPCXX_BLDDIR)/example/gpu_vecadd upcxx-install force
	@set -x ; env $(MAKE_TEST_ENV) $(MAKE) -C $< clean $*_vecadd
	mv $</$*_vecadd $(TEST_EXE)

CMAKE ?= cmake
CMAKE_ARGS ?=
CMAKE_FC_ARGS=
ifeq ($(shell uname -s),Darwin)
  # Apple CMake is a special snowflake and ignores $CC/$CXX, so force them via cmd-line
  # CMake cannot handle embedded arguments when passed this way, so strip them and hope for the best..
  export UPCXX_FC
  CMAKE_ARGS := -DCMAKE_C_COMPILER="$${CC%% *}" -DCMAKE_CXX_COMPILER="$${CXX%% *}" $(CMAKE_ARGS)
  # CMake warns when passed a compiler it does not use
  CMAKE_FC_ARGS := -DCMAKE_Fortran_COMPILER="$${UPCXX_FC%% *}"
endif

cmake-exe :: upcxx-install
	-rm -Rf cmake
	cp -r $(UPCXX_BLDDIR)/utils/cmake .
	rm -f cmake/UPCXXConfig*
	cd cmake && ( set -x ; \
	export UPCXX_CODEMODE=$(UPCXX_CODEMODE) UPCXX_VERBOSE=1 ; \
	export $(MAKE_TEST_ENV) ; \
	$(CMAKE) --version ; \
	$(CMAKE) -DCMAKE_PREFIX_PATH=$(UPCXX_INSTDIR) $(CMAKE_ARGS) . )
	$(MAKE) -C cmake all VERBOSE=1
	mv cmake/upcxx_test $(TEST_EXE)

SYMPACK_URL?=https://github.com/symPACK/symPACK/archive/master.tar.gz
SYMPACK_GIT_REPO?=#https://github.com/symPACK/symPACK.git # does not support archive?
SYMPACK_GIT_COMMIT=master
#SYMPACK_INPUT_PROBLEM?=nasa2146
SYMPACK_INPUT_PROBLEM?=boneS10
SYMPACK_INPUT_URL=https://bitbucket.org/berkeleylab/upcxx-extras/downloads/$(SYMPACK_INPUT_PROBLEM).tar.gz
SYMPACK_DIR=$(HARNESS_WORKDIR)/sympack
SYMPACK_DRIVER=run_sympack
SYMPACK_CUDA=-DENABLE_CUDA=OFF
_sympack:
	-rm -Rf $(SYMPACK_DIR)
	( set -x ; $(MAKE) upcxx-download PRODUCT=sympack URL=$(SYMPACK_URL) GIT_REPO=$(SYMPACK_GIT_REPO) GIT_COMMIT=$(SYMPACK_GIT_COMMIT) DESTDIR=$(SYMPACK_DIR) ) 2>&1 | tee -a $(LOGFILE) $(PIPEEXIT)
	( set -x ; $(MAKE) upcxx-download PRODUCT=sympack_input URL=$(SYMPACK_INPUT_URL) GIT_REPO= GIT_COMMIT= DESTDIR=$(SYMPACK_DIR)/input ) 2>&1 | tee -a $(LOGFILE) $(PIPEEXIT)
	mv $(SYMPACK_DIR)/input/$(SYMPACK_INPUT_PROBLEM).rb sympack-input.rb
	@echo '#!/bin/sh' > $@ ; chmod +x $@

sympack-exe :: upcxx-install force
	-rm -Rf $(SYMPACK_DIR)/$(UPCXX_THREADMODE)
	mkdir $(SYMPACK_DIR)/$(UPCXX_THREADMODE)
	cd $(SYMPACK_DIR)/$(UPCXX_THREADMODE) && ( set -x ; \
	case "$(UPCXX_THREADMODE)" in seq) export SYMPACK_THREADS=-DENABLE_THREADS=OFF ;; \
	                              par) export SYMPACK_THREADS=-DENABLE_THREADS=ON ;; esac; \
	export UPCXX_CODEMODE=$(UPCXX_CODEMODE) UPCXX_VERBOSE=1 ; \
	export $(MAKE_TEST_ENV) FC="$(UPCXX_FC)" ; \
	$(CMAKE) --version ; \
	$(CMAKE) -DCMAKE_PREFIX_PATH=$(UPCXX_INSTDIR) $(CMAKE_ARGS) $(CMAKE_FC_ARGS) \
	         -DENABLE_PTSCOTCH=OFF -DENABLE_SCOTCH=OFF -DENABLE_PARMETIS=OFF -DENABLE_METIS=OFF \
		 $(SYMPACK_CUDA) $$SYMPACK_THREADS $(SYMPACK_BUILD) \
		 .. )
	$(MAKE) -C $(SYMPACK_DIR)/$(UPCXX_THREADMODE) $(SYMPACK_DRIVER) VERBOSE=1
	mv $(SYMPACK_DIR)/$(UPCXX_THREADMODE)/$(SYMPACK_DRIVER) $(TEST_EXE)

sympack2D-exe :: force
	$(MAKE) SYMPACK_DRIVER=run_sympack2D sympack-exe

sympack2D_cuda-exe :: force
	$(MAKE) SYMPACK_DRIVER=run_sympack2D SYMPACK_CUDA=-DENABLE_CUDA=ON sympack-exe


force:

.PHONY: force inst_test
