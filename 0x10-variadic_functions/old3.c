#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_int - print int
 * @param: int to print
 * Return: void
 */
void p_int(va_list param)
{
	printf("%d", va_arg(param, int));
}
/**
 * p_double - print double
 * @param: what to print
 * Return: void
 */
void p_double(va_list param)
{
	printf("%f", va_arg(param, double));
}
/**
 * p_char - print char
 * @param: what to print
 * Return: void
 */
void p_char(va_list param)
{
	printf("%c", va_arg(param, int));
}

/**
 * p_string - print string
 * @param: what to print
 * Return: void
 */
void p_string(va_list param)
{
	char *what = va_arg(param, char *);

	if (what)
		printf("%s", what);
	else
		printf("(nil)");
}
/**
 * print_all - print anything
 * @format: format to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	forms f_arr[] =	{
		{'c', p_char},
		{'i', p_int},
		{'f', p_double},
		{'s', p_string},
	};
	int i = 0;
	int x;
	char *sep = "";
	va_list param;

	va_start(param, format);
	while (format[i] && format)
	{
		x = 0;
		while (x < 4)
		{
			if (f_arr[x].a == format[i])
			{
				printf("%s", sep);
				f_arr[x].print(param);
				sep = ", ";
			};
			x++;
		};
		i++;
	};
	printf("\n");
	va_end(param);

}
