#include <stdlib.h>
#include <ctype.h>
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the digit to check
 * Return: an integer value 1 or 0
 */
int _isdigit(int c)
{
	int dig = c;

	if (isdigit(dig))
		return (1);
	else
		return (0);
}
