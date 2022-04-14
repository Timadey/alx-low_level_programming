#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: how many times the line should be drawn
 *
 * Return: void
 */
void print_line(int n)
{
	if (n != 0 && n > 0)
	{
		int c;

		for (c = 0; c < n; c++)
			_putchar('_');
	};
	_putchar('\n');
}

