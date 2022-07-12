#include "main.h"
#include <string.h>
/**
 * _strncat -  function is similar to the _strcat function,
 * except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
