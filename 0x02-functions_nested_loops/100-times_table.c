
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the table to print
 * Result: nothing
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
}
else
{
	int x = 0;
	int count = 0;

	while (x <= n)
	{
		int y = 1;
		int res = 0;

		_putchar ('0');
		if (n == 0)
			_putchar('\n');

		while (y <= n)
		{
			res = y * count;
			if (res <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar (res + '0');
			}
			else if (res > 99)
			{
			_putchar(',');
			_putchar(' ');
		_putchar(res / 100 + '0');
			_putchar((res % 100) / 10 + '0');
			_putchar((res % 100) % 10 + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(res / 10 + '0');
			_putchar(res % 10 + '0');
			};
			if (y == n)
				_putchar('\n');
			y++;
		};
		x++;
		count++;
	};
};
}

