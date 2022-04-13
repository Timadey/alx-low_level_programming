#include <stdlib.h>
#include <stdio.h>

/**
 * main - the starting point of the program
 * Return: 0
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int term = 0;

	printf("%d%s%d", n1, ", ", n2);
	while (term < 49)
	{
		int fibn = n1 + n2;

		printf("%s", ", ");
		printf("%d", fibn);
		n1 = n2;
		n2 = fibn;
		term++;
	};
	printf("%c", '\n');
	return (0);
}

