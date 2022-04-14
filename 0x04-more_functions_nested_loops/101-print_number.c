#include "main.h"
#include <stdlib.h>
#include <inttypes.h>
/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	int nnum = n;
	int num = abs(n);
	int fd = abs(n);
	int div = 1;

	if (nnum < 0)
		_putchar(45);
	if (num < 10 && num >= 0)
	{
		_putchar(num + '0');
	}
	else
	{
		while (abs(fd) >= 10)
		{
			fd = num / (div * 10);
			div *= 10;
		};
		while (num != 0)
		{
			_putchar(num /div + '0');
			num = num % div;
			div = div / 10;
			if (div == 1)
			{
				_putchar(num + '0');
				break;
			};
		};
	};
}
