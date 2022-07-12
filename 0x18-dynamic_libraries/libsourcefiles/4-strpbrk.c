#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: a string
 * @accept: a string
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
