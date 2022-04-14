#include "main.h"
/**
 * print_triangle -  prints a triangle
 * , followed by a new line.
 * @size: the size of the traingle
 * Return: void
 */
void print_triangle(int size)
{

	if (size != 0 && size > 0)
	{
		int x;

		for (x = 1; x <= size; x++)
		{
			int y;

			for (y = size; y >= 1; y--)
			{
				if (y <= x)
					_putchar('#');
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
