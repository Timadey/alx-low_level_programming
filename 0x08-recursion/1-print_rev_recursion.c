#include "main.h"
#include <string.h>
/**
 * prt_char - recursively prints a char from
 * a string if some
 * conditions are met
 * @str: pointer to the whole string
 * @ind: index of the char to print
 * Return: void
 */
void prt_char(char *str, int ind)
{
	if (ind >= 0)
	{
		_putchar(*(str + ind));
		prt_char(str, ind - 1);
	};
}
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the pointer to thestring
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	prt_char(s, len - 1);
}
