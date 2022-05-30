#include "main.h"
/**
 * pw - raise to power
 * @base: base number
 * @exp: express
 * Return: the result
 */
int pw (int base, int exp)
{
	int result = 1;
	while (exp)
	{
		result *= base;
		exp--;
	}
	return (result);
}
/**
 * int binary_to_uint - converts a binary to an unsigned int
 * @b: the binary string to convert to integer
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or when b is null
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0;
	int len = 0;
	int i, c;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			len++;
			b++;
		}
		else
			return (0);
	};
	b--;
	for (i = 0; i < len; i++)
	{
		c = *b - 48;
		num += (c * pw(2, i));
		b--;
	}
	return (num);
}
