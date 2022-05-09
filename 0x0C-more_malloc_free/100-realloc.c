#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a ppointer to the new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	};
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
