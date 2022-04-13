
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the table to print
 * Return: nothing
 */
/**
 * printword - to reduce line in the function
 * @res - the argument used in printing
 * Return: nothing
 */
/**
 * printword2 - to reduce line in my function
 * @res - the argument used un printing
 * Return: nothing
 */
/**
 * printword3 - to reduce line in function
 * @res - the argument used in printf
 * Return: nothing
 */
void printword(int res);
void printword2(int res);
void printword3(int res);

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
				printword3(res);
			else if (res > 99)
				printword2(res);
			else
				printword(res);
			if (y == n)
				_putchar('\n');
			y++;
		};
		x++;
		count++;
	};
};
}

void printword(int res)
{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(res / 10 + '0');
			_putchar(res % 10 + '0');
}
void printword2(int res)
{

			_putchar(',');
			_putchar(' ');
		_putchar(res / 100 + '0');
			_putchar((res % 100) / 10 + '0');
			_putchar((res % 100) % 10 + '0');
}

void printword3(int res)
{

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar (res + '0');
}
