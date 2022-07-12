#include "3-calc.h"
/**
 * add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * mod - calculates the modulo of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}

