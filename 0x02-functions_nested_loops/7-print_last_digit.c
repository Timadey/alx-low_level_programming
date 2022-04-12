#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number which the last digit is to be printed
 *
 * Return: integer value
 */
int print_last_digit(int num)
{
	int numb = num;
	int ld = numb % 10;

	return (ld);
}
