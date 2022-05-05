#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the arry
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **two_dim = malloc((sizeof(int *)) * height);
	int x = 0;
	int y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (two_dim == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		*(two_dim + x) = malloc((sizeof(int)) * width);
	};
	for (x = 0; x < height; x++)
	{
		for (; y < width; y++)
		{
			*(*(two_dim + x) + y) = 0;
		};
	};
	return (two_dim);
}
