#include <stdio.h>
/*
 * main - The starting point of the program
 * Description: Write a program that prints
 * all possible combinations of two two-digit numbers.
 *
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits.
 *  1 should be printed as 01
 * The combination of numbers must be separated by comma,
 * followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as
 * the same combination of the numbers 0 and 1
 * You can only use the putchar function
 *  (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0, void or non-zero value when an error occurs
 */

int main(void)
{
	/* Declarations */
	int first_digit;
	int sec_digit;

	for (first_digit = 0; first_digit < 100; first_digit++)
	{
		for (sec_digit = 0; sec_digit < 100; sec_digit++)
		{
			if (first_digit < sec_digit)
			{
				putchar ((first_digit / 10) + '0');
				putchar ((first_digit % 10) + '0');
				putchar (' ');
				putchar ((sec_digit / 10) + '0');
				putchar ((sec_digit % 10) + '0');
				if (first_digit < 98)
				{
					putchar (',');
					putchar (' ');
				};
			};
		};
	};
	putchar('\n');
	return (0);
}
