#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the character
 * Return: a pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *mychar;
	unsigned int i = 0;

	if (size  == 0)
		return (NULL);
	mychar = malloc(sizeof(c) * size);

	if (mychar == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		*(mychar + i) = c;
	};
	return (mychar);
}
