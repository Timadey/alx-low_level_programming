#include "search_algos.h"
/**
* binary_search - function that searches for a value in a sorted
* array of integers using the Binary search algorithm
* @array: the array to search
* @size: the size of the array
* @value: the value to search for
* Return: the index the value is found
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int) size - 1;
	int middle;

	if (array != NULL)
	{
		while (left < right)
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			middle = (left + right) / 2;
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);

}

/**
* print_array - print array with lower and upper bound
* @array: the array to print
* @first: the index first element
* @last: the index of the last element
* Return: void
*/

void print_array(int *array, int first, int last)
{
	int x;

	printf("%d", array[first]);
	first++;
	for (x = first; x <= last; x++)
	{
		printf(", %d", array[x]);
	}
	printf("\n");
}
