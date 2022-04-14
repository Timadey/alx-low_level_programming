#include "main.h"
/**
 * more_numbers - prints the numbers, from 0 to 14,
 *  followed by a new line.
 *  Return: void
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int y;

		for (y = 0; y < 15; y++)
		{
			if (y < 9)
				_putchar(y + '0');
			else
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			};
		};
		_putchar('\n');
	};
}
