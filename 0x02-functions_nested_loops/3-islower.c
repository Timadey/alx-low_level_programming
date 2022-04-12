#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character.
 * @c: the letter to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	int letter = c;

	if (islower(letter))
		return (1);
	else
		return (0);
}
