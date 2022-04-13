#include <stdlib.h>
#include <stdio.h>

/**
 * main - the starting point of the program
 * Return: 0
 */

int main(void)
{
	long int n1 = 0;
	long int n2 = 1;
	long int sum = 0;
	int term = 1;

	while (term > 0)
	{
		long int fibn = n1 + n2;

		if (fibn > 4000000)
			break;
		else if (fibn % 2 == 0)
			sum = sum + fibn;
		n1 = n2;
		n2 = fibn;
		term++;
	};
	printf("%lld%c", (long long)(sum), '\n');
	return (0);
}

