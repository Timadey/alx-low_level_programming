#include "main.h"
#include <string.h>
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	};
	_putchar('\n');
}
