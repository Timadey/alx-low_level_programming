#include "search_algos.h"
/**
* linear_search - function that searches for a value in an
* array of integers using the Linear search algorithm
* @array: the array to search
* @size: the size of the array
* @value: the value to search for
* Return: the first index the value is found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array != NULL && size != 0)
	{
		for (x = 0; x < size; x++)
		{
			printf ("Value checked at array[%ld] = [%d]\n", x, array[x]);
			if (array[x] == value)
			{
				return (x);
			}
		}
	}
	return (-1);
}
