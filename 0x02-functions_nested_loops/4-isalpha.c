#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character.
 * @c: the letter to be checked
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int letter = c;

	if (isalpha(letter))
		return (1);
	else
		return (0);
}
