/*
 * Sample code to demonstrate code coverage
 */
#include <stdio.h>
#include <stdlib.h>

static int add(int a, int b)
{
	return a + b;
}

static int sub(int a, int b)
{
	return a - b;
}

static int mul(int a, int b)
{
	return a * b;
}

static int division(int a, int b)
{
	return a / b;
}

static int reminder(int a, int b)
{
	return a % b;
}

static void print_usage(void)
{
	printf("usage: <prog> <option>\n");
	printf("where option value can be\n");
	printf("1 for add\n");
	printf("2 for sub\n");
	printf("3 for multiply\n");
	printf("4 for divisionision\n");
	printf("5 for reminder\n");
	exit(-1);
}

void main(int argc, char *argv[])
{
	int opt = -1;

	if (argc < 2) {
		print_usage();
        }
	
	opt = atoi(argv[1]);


	switch(opt) {
		case 1:
			printf("add: %d\n", add(1,2));
			break;
		case 2:
			printf("sub: %d\n", sub(3,2));
			break;
		case 3:
			printf("mul: %d\n", mul(4,5));
			break;
		case 4:
			printf("division: %d\n", division(10,2));
			break;
		case 5:
			printf("reminder: %d\n", reminder(10,3));
			break;
		default:
			print_usage();
	}
} 

