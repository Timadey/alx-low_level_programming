#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to start filling bytes
 * @b: the constant byte to fill the first n byte with
 * @n: the first n bytes pointed to by s to fill with b
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
