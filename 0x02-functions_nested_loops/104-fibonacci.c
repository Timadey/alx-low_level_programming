
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the starting point of the program
 * Return: 0
 */

int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	int term = 0;

	printf("%ld%s%ld", n1, ", ", n2);
	while (term < 98)
	{
		long int fibn = n1 + n2;

		printf("%s", ", ");
		printf("%ld", fibn);
		n1 = n2;
		n2 = fibn;
		term++;
	};
	printf("%c", '\n');
	return (0);
}

