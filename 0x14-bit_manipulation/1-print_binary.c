#include "main.h"
/**
 * div - divides a number
 * @num: number to divide
 * @divi: divisor
 * Return: the quotient
 */
int div(int num, int divi)
{
	return (num / divi);
}
/**
 * mod - finds the reminder of a division
 * @num: the number to divide
 * @divi: the divisor
 * Return: the reminder
 */
int mod(int num, int divi)
{
	return(num % divi);
}
/**
 * print_binary - prints the binary representation of number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int modl = mod(n, 2);
	int divd = div(n, 2);

	if (divd == 0)
		_putchar('0' + modl);
	else
	{
		print_binary(divd);
		_putchar('0' + modl);
	}
}
