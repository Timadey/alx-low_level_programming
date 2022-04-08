#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declaration */
	int hexnum = 48;
	char letter = 'a';
	int i;

	/* Body */
	for (i = 0; i < 10; i++)
	{
		putchar (hexnum);
		hexnum++;
	};
	for (i = 0; i < 6; i++)
	{
		putchar (letter);
		letter++;
	};
	putchar ('\n');
	return (0);
}
