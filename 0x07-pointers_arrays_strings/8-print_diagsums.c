#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the pointer to the matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, fir_diag, sec_diag = 0;

	for (i = 0; i < size; i++)
	{
		fir_diag = fir_diag + (*(a + (size * i + i)));
		sec_diag = sec_diag + (*(a + (size * i + size - 1 - i)));
	};
	printf("%d, %d\n", fir_diag, sec_diag);
}
