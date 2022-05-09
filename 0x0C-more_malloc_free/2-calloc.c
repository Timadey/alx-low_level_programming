#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of element in the array
 * @size: size of members of the array
 * Return: pointer to the array memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *myarr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	myarr = malloc(nmemb * size);
	if (myarr == NULL)
		return (NULL);
	return (myarr);
}
