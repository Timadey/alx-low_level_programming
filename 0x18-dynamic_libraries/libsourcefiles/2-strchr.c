#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: string to search
 * @c: character to locate
 * Return: a pointer to the first occurence of the
 * character c in s or NULL
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
