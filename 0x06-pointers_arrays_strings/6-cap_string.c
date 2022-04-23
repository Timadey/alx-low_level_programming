#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str - the string to capitalize
 * Return: the pointer of the string
 */
char *cap_string(char *str)
{
	char sep[] = {32, 9, 10, 44, 58, 46, 33, 63, 34, 40, 41, 123, 125};
	int n = 0;
	int len = strlen(sep);

	while (*str != '\0')
	{
		for (n = 0; n < len; n++)
		{
			if (*str == sep[n])
			{
				*(str + 1) = toupper(*(str + 1));
			};
		};
		str++;
	};
	return (str);
}
