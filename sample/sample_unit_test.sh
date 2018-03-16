#!/bin/bash
#Sample program to run sample_gcov program with different unit test input 
#parameters to generate code coverage data

#To test print_usage command
./sample_gcov

#To test addition
./sample_gcov 1

#To test subtraction 
./sample_gcov 2

#To test mulitplication 
./sample_gcov 3

#To test division 
./sample_gcov 4

#To test reminder 
./sample_gcov 5

#To test default-switch-case 
#./sample_gcov 6
#Uncomment the above line to get 100% code coverage
#Its intentionally commented so the coverage data shows that the default switch
#case as not covered by the unit test runs 

exit 0
