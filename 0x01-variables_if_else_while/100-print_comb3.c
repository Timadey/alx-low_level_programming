#include <stdio.h>
/**
 * main - main Entry
 * Description: print all possible combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declaration */
	int first_digit;
	int sec_digit;

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (sec_digit = '0'; sec_digit <= '9'; sec_digit++)
		{
			if (first_digit < sec_digit && first_digit != sec_digit)
			{
				putchar (first_digit);
				putchar (sec_digit);
				if (first_digit != '8')
				{
					putchar (',');
					putchar (' ');
				};
			};
		};
	};
	putchar('\n');
	return (0);
}
