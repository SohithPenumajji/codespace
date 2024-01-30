#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	printf("THE SIZE OF INT occupy %zd bytes\n", sizeof(int));
	printf("THE SIZE OF CHAR occupy %zd bytes\n", sizeof(char));
	printf("THE SIZE OF LONG occupy %zd bytes\n", sizeof(long));
	printf("THE SIZE OF LONG LONG occupy %zd bytes\n", sizeof(long long));
	printf("THE SIZE OF DOUBLE occupy %zd bytes\n", sizeof(double));
	printf("THE SIZE OF LONG DOUBLE occupy %zd bytes\n", sizeof(long double));
	
	return 0;
}
