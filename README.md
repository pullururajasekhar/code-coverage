# code-coverage
how to get code coverage with a sample .c program
--------------------------------------------------

The program that needs to be tested for code-coverage will have to be compiled
with --coverage gcc compiler option

Once the program is compiled, the program needs to be executed with various
input parameters/test-cases, so as the full/maximum program code instruction 
gets executed.

After the execution, run the lcov command to get the function and line
coverage of the program code using below format:

Below command will generate the coverage.info file
$lcov -t "result" -o coverage.info -c -d .

Below command will generate the code coverage data html files for every 
.c source file along with number of functions and lines executed, highlighting
the lines covered and not covered.
$genhtml -o output_dir coverage.info 

check out this ![sample coverage](https://raw.githubusercontent.com/pullururajasekhar/code-coverage/sample/sample_coverage_html_files/sample_c_coverage.png)
for sample output

Below information provides details of the files in this repository:

sample.c is the program code that will be compiled with --coverage option

sample_unit_test.sh is the script that runs the above compiled program (with 
coverage option enabled) with different input values that helps to cover 
all the lines of the code in sample.c

Makefile: complies below targets 

make sample_gcov : will compile the sample.c with --coverage compiler option and 
generate the program sample_gcov

make clean: will remove the sample_gcov

make generate_coverage: will run the sample_unit_test.sh unit test program
and also generate code coverage data and its related html data 

make show_coverage_http: will start a simple http server and output the
code coverage data in html format (sample output files are copied to the
sample_coverage_html_files/) can be seen with the help of browser by opening
http://localhost:8000 (use the port reported by the command)

make all : same as above show_coverage_http

code coverage data html files under sample_coverage_html_files: 
Directory listing for _.html       
LCOV - sample_coverage.info.html            
LCOV - sample_coverage.info - sample.html            
LCOV - sample_coverage.info - sample_sample.c.html 
=> blue colored lines are covered by unit-test run, where as orange colored 
lines are not covered by unit-test (uncomment the line # ./sample_gcov 6 in 
sample_unit_test.sh and, run make all get 100% code coverage data shown in 
html page)

