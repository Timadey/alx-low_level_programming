#include "main.h"
#include <ctype.h>
/**
 * rot13 - encodes a string using rot13.
 * @str: the string to encode
 * Return: the pointer to the string
 */
char *rot13(char *str)
{
	char *hold = str;
	char word[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		int index = 0;

		for (index = 0; index < 52; index++)
		{
			if (*str == *(word + index))
			{
				*str = *(rot13 + index);
				break;
			};
		};
		str++;
	};
	return (hold);
}
