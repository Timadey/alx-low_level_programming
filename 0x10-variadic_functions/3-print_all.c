#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: parameters formats
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list param;
	char *str;
	int i = 0, x, sep = 0;
	const char forms[] = "cifs";

	va_start(param, format);
	while (format[i])
	{
		x = 0;
		while (forms[x])
		{
			if (format[i] == forms[x] && sep)
			{
				printf(", ");
				break;
			} x++;
		};
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(param, int)), sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(param, int)), sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(param, double)), sep = 1;
				break;
			case 's':
				str = va_arg(param, char *), sep = 1;
				if (str)
				{
					printf("%s", str);
					break;
				};
				printf("(nil)");
				break;
		} i++;
	};
	printf("\n"), va_end(param);
}
