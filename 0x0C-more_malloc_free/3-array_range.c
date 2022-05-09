#include <stdlib.h>
/**
 * array_range - creates an array of integer
 * @min: min value in the array
 * @max: max value in the array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		arr[i] = min;
	return (arr);
}
