#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n != 0 && n > 0)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			int y;

			for (y = 0; y <= x; y++)
			{
				if (y == x)
					_putchar('\\');
				else
					_putchar(' ');
			};
			_putchar('\n');
		};
	}
	else
	{
		_putchar('\n');
	};
}
