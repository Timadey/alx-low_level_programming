
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
	int third_digit;
	int fourth_digit;
	int first_part;
	int sec_part;
	int total = 4 * ('9');

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (sec_digit = '0'; sec_digit <= '9'; sec_digit++)
		{
			for (third_digit = '0'; third_digit <= '9'; third_digit++)
			{
			for (fourth_digit = '0'; fourth_digit <= '9'; fourth_digit++)
			{
				first_part = first_digit + sec_digit;
				sec_part = third_digit + fourth_digit;
			if (first_part < sec_part &&
					first_part != sec_part)
				{
				putchar (first_digit);
				putchar (sec_digit);
				putchar (' ');
				putchar (third_digit);
				putchar (fourth_digit);
				if ((first_part + sec_part) != total)
		/*
		 *	if (first_digit != '9' && sec_digit != '9'
		*				&& third_digit != '9l
		*				&& fourth_digit != '9'
		*/
					{
					putchar (',');
					putchar (' ');
					};
				};
			};
			};
	};
	};
	putchar ('\n');
	return (0);
}
