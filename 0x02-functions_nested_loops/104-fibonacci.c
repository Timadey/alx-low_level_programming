
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the starting point of the program
 * Return: 0
 */

int main(void)
{
	long unsigned int n1 = 1;
	long unsigned int n2 = 2;
	int term = 0;

	printf("%ld%s%ld", n1, ", ", n2);
	while (term < 96)
	{
		long unsigned int fibn = n1 + n2;

		printf("%s", ", ");
		printf("%llu", (long long unsigned) fibn);
		n1 = n2;
		n2 = fibn;
		term++;
	};
	printf("%c", '\n');
	return (0);
}

