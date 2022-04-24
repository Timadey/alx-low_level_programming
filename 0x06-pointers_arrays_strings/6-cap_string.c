#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 * Return: the pointer of the string
 */
char *cap_string(char *str)
{
	char *hold = str;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int n = 0;
	int len = strlen(sep);

	if (*str >= 97 && *str <= 122)
		*str = toupper(*str);
	str++;
	while (*str != '\0')
	{
		for (n = 0; n < len; n++)
		{
			if (*str == sep[n] && isalpha(*(str + 1)))
			{
				*(str + 1) = toupper(*(str + 1));
			};
		};
		str++;
	};
	return (hold);
}
