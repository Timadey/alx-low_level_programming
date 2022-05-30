#include "main.h"
#include <stdlib.h>

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
 * get_bit - returns the value of a bit at a given index
 * @n: number to get the bit
 * @index: index of bit to return
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bits = base_format(n, 2);
	unsigned int len = 0;
	int bit = 0;

	if (!bits)
		return (-1);
	while (bits[len] != '\0')
		len++;
	if (index > len - 1)
		return (-1);
	bit = bits[index] - 48;
	free(bits);
	return(bit);
}
