#include <stddef.h>
/**
 * int_index - searches for an integer.
 * @array: poniter to array to search the integer
 * @size: size of the array
 * @cmp: pointer to function for comparing the integer
 * Return: voi
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		};
	};
	return (-1);
}
