#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number which the last digit is to be printed
 *
 * Return: integer value
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	{
		_putchar('0' - ld);
		return (-ld);
	}
	else
	{
		_putchar ('0' + ld);
		return (ld);
	};
}
