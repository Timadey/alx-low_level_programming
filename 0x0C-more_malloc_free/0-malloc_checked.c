#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: a pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *mymem = malloc(b);

	if (mymem == NULL)
		exit(98);
	return (mymem);
}
