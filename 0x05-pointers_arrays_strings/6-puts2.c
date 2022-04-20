#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int len = strlen(str);
	int c = 0;

	while (c < len)
	{
		_putchar(str[c]);
		c += 2;
	};
	_putchar('\n');
}
