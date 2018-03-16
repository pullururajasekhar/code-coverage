#makefile to compile sample.c with coverage enabled

CC=gcc
CFLAGS=--coverage

RM=/bin/rm

LCOV=/usr/bin/lcov
GENHTML=/usr/bin/genhtml
PYTHON=/usr/bin/python
SH=/bin/sh
ECHO=/bin/echo

all: show_coverage_http 

sample_gcov : sample.c
	$(CC) $(CFLAGS) -o $@ $<	
	
generate_coverage: sample_gcov
	$(ECHO) "running unit test"
	$(SH) sample_unit_test.sh 
	$(ECHO) "generating coverage"
	$(LCOV) -t "result" -o sample_coverage.info -c -d .
	$(ECHO) "generating html files for coverage data"
	$(GENHTML) -o sample_coverage_data sample_coverage.info

show_coverage_http: generate_coverage sample_coverage_data
	$(ECHO) "starting http server to show coverage data"
	cd sample_coverage_data
	$(PYTHON) -m "SimpleHTTPServer"

clean_coverage:
	-$(RM) *.gcda *.gcno  
	-$(RM) sample_coverage.info
	-$(RM) -rf sample_coverage_data 

clean: clean_coverage 
	-$(RM) -f sample_gcov 

