#include "main.h"
/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: the string to encode
 * Return: the pointer to the string encouded
 */
char *leet(char *str)
{
	char *hold = str;
	char mozart[5][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};

	while (*str != '\0')
	{
		int index = 0;

		for (index = 0; index < 5; index++)
		{
			if (*str == mozart[index][0] || *str == mozart[index][1])
				*str = mozart[index][2];
		};
		str++;
	};
	return (hold);
}
