#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints a number followed by a new line
 * @separator: pointer to separator string
 * @n: number paramters passed to function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n-1 && separator)
			printf("%s", separator);
	};
	printf("%c", '\n');
	va_end(numbers);
}
