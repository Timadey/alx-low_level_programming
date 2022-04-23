#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the pointer to the array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int front = 0;
	int back = n - 1;

	while ((back - front) > 0)
	{
		int hold;

		hold = *(a + front);
		*(a + front) = *(a + back);
		*(a + back) = hold;
		front++;
		back--;
	};
}
