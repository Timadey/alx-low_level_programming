#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Result: nothing
 */
void times_table(void)
{
	int x = 0;
	int count = 0;

	while (x <= 9)
	{
		int y = 1;
		int res = 0;

		_putchar ('0');

		while (y <= 9)
		{
			res = y * count;
			if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar (res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			};
			if (y == 9)
				_putchar('\n');
			y++;
		};
		x++;
		count++;
	};
}

