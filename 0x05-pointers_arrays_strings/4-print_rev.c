#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: the string to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len > -1)
	{
		if (s[len] != '\0')
		{
			_putchar(s[len]);
		};
		len--;
	};
	_putchar('\n');
}
