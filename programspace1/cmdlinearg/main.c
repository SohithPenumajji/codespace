#include <stdio.h>

int main(int argc, char *argv[])
{
	int NumberOfArguments = argc;
	char *Argument1 = argv[0];
	char *argument2 = argv[1];
	
	printf("The number of arguments are: %d\n", NumberOfArguments);
	printf("Argument 1 reads the program name: %s\n", Argument1);
	printf("Argument 2 reads the command line: %s\n", argument2);
	
	return 0;
}
