#include <stdlib.h>
#include <ctype.h>
/**
 * _isupper - checks for uppercase character.
 * @c: the character to check
 * Return: an integer value 1 or 0
 */
int _isupper(int c)
{
	int ch = c;

	if (isupper(ch))
		return (1);
	else
		return (0);
}
