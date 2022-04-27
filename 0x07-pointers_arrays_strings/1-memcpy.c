#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: pointer to copy memory to
 * @src: src pointer to copy memory from
 * @n: number of bytes to copy from memory area src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
