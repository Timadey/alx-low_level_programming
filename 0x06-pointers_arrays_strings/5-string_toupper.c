#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: the poiter to the string
 * Return: return a pointer to the string
 */
char *string_toupper(char *str)
{
	/* char *hold = str; */

	while (*str != '\0')
	{
		*str = toupper(*str);
		(str)++;
	};
	return (str);
}
