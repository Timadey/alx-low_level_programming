#include "main.h"
#include <stdlib.h>
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
/**
 * base_format- convert to base
 * Coverts an unsigned integer to string in a particular base
 * @num: the number
 * @base: the base
 * Return: the string containing the base format
 */
char *base_format(unsigned long num, unsigned int base)
{
	char *str;
	unsigned long n = num;
	unsigned int rem = 0;
	int len = 1;

	while (n > (base - 1))
	{
		n /= base;
		len++;
	};
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	else
	{
		str[len] = '\0';
		len--;
		while (len > -1)
		{
			rem = num % base;
			str[len] =  '0' + rem;
			num /= base;
			len--;
		};
	};
	return(str);
}
/**
 * set_bit - returns the value of a bit at a given index
 * @n: number to get the bit
 * @index: index of bit to return
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *bits = base_format(*n, 2);
	unsigned int len = 0;

	if (!bits)
		return (-1);
	while (bits[len] != '\0')
		len++;
	if (index > len - 1)
		return (-1);
	bits[index] = '1';
	*n = binary_to_uint(bits);
	free(bits);
	return(1);
}
