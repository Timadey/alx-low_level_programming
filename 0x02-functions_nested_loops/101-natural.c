#include "main.h"
#include <stdio.h>
/**
 * print_multiples - prints all natural numbers
 *  from n to 98, followed by a new line.
 *
 *  Return: void
 */
void print_multiples(void)
{
	int sum = 0;
	int n = 0;

		while (n < 1024)
		{
			if ((n % 5 == 0) || (n % 3 == 0))
			{
				sum = sum + n;
			};
			n++;
		};
		printf("%d%c", sum, '\n');
};
/**
 * main -starting point of program
 * Return: always 0
 */
int main(void)
{
	print_multiples();
	return (0);
}
