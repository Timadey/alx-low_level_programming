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
	int num = 48;
	int i;

	/* Body */
	for (i = 0; i < 10; i++)
	{
		putchar (num);
		num++;
	};
	putchar ('\n');
	return (0);
}
