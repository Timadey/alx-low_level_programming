#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9,
 *  followed by a new line. Don't print 2 and 4.
 *  Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 50 && x != 52)
		_putchar(x);
	};
	_putchar('\n');
}
