#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to concatenate
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
