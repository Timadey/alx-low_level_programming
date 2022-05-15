#include <stddef.h>
/**
 * array_iterator -  executes a function given as a parameter 
 * on each element of an array.
 * @size: size of the array
 * @array: array to execute action on
 * @action: function that has the code for the action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int siz = (int) size;

	if (!(array || action))
		return;
	for (; i < siz; i++)
		action(array[i]);
}
