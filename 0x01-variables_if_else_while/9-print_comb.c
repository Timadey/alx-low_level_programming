
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
		if (i < 9)
		{
			putchar (44);
			putchar (32);
		};
		num++;
	};
	return (0);
}
