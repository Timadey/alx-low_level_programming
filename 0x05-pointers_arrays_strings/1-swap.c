#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the first integer
 * @b: the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}
