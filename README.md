# code-coverage
how to get code coverage with a sample .c program
--------------------------------------------------

The program that needs to be tested for code-coverage needs to be compiled
with --coverage gcc compiler option

sample.c is the program code that will be compiled with --coverage option

sample_unit_test.sh is the script that runs the above compiled program (with 
coverage option enabled) with different input values that helps to cover 
all the lines of the code in sample.c

Makefile: compiles sample.c with --coverage option and also provides different
targets as listed below:
make all : will compile the sample.c with --coverage compiler option and 
generate the program sample_gcov
make sample_gcov : same as above
make clean: will remove the sample_gcov
make generate_coverage: will run the sample_unit_test.sh unit test program
and also generate code coverage data and its related html data 
make show_coverage_http: will start a simple http server and output the
code coverage data in html format (sample output files are copied to the
sample_coverage_html_files/) can be seen with the help of browser by opening
http://localhost:8000 (use the port reported by the command)

code coverage data html files under sample_coverage_html_files: 
Directory listing for _.html       
LCOV - sample_coverage.info.html            
LCOV - sample_coverage.info - sample.html            
LCOV - sample_coverage.info - sample_sample.c.html => blue colored lines are  
covered by unit-test run, where as orange colored lines are not covered by
unit-test (uncomment the line # ./sample_gcov 6 in sample_unit_test.sh
and, run make clean, make generate_coverage, make show_coverage_http to
get 100% code coverage data shown in html page)

