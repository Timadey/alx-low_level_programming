#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	int num;
	int fd;
	int div = 1;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
		fd = num;
	}
	else
	{
		num = fd = n;
	};
	if (num < 10 && num >= 0)
	{
		_putchar(num + 48);
	}
	else
	{
		while (fd >= 10)
		{
			fd = num / (div * 10);
			div *= 10;
		};
		while (num != 0)
		{
			_putchar(num / div + 48);
			num = num % div;
			div = div / 10;
			if (div == 1)
			{
				_putchar(num + 48);
				break;
			};
		};
	};
}
