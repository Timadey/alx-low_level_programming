
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
	char sm_letter = 'z';
	int i;

	/* Body */
	for (i = 0; i < 26; i++)
	{
		putchar (sm_letter);
		sm_letter--;
	};
	putchar ('\n');
	return (0);
}
