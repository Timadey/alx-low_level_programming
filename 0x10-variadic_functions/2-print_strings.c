#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a strings followed by a new line
 * @separator: the pointer to the sepearting string
 * @n: number of parameters passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	char *str;
	va_list strings;

	va_start(strings, n);
	if (!separator)
		return;
	while (i <= n)
	{
		str = va_arg(strings, char *);
		if (!str)
			printf("%s", "(nil)");
		else
		{
			printf("%s", str);
			if (i < n && separator)
				printf("%s", separator);
		};
		i++;
	};
	printf("%c", '\n');
	va_end(strings);
}
