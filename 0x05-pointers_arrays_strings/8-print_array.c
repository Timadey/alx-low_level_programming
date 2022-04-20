#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: pointer to the array
 * @n: the number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int c = 1;

	printf("%d", *a);
	while (c < n)
	{
		printf(", %d", *(a + c));
		c++;
	};
	printf("%c", '\n');
}
