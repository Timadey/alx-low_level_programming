#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the largest prime factor
 *  of the number 612852475143
 *  Return: 0
 */
int main(void)
{
	int prime;
	long int quo = 612852475143;

	while (quo > 1)
	{
		int div = 2;

		while (div > 0)
		{
			if (quo % div == 0)
			{
				prime = div;
				quo /= div;
				break;
			};
			div++;
		};
	};
	printf("%d%c", prime, '\n');
	return (0);
}
