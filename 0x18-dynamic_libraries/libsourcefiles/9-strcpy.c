#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination pointer
 * @src: source pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
