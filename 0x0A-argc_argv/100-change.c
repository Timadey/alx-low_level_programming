#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * calc_change - calculates the change
 * @cent: the original money given
 * Return: int value of how many coins required
 */
int calc_change(int cent)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int count = 0;

	for (i = 0; i < 5; i++)
	{
		if (cent / coins[i] >= 1 && cent % coins[i] == 0)
		{
			count = count + (cent / coins[i]);
			return (count);
		}
		else if (cent / coins[i] >= 1 && cent % coins[i] != 0)
		{
			count = count + (cent / coins[i]);
			cent = cent % coins[i];
		};
	};
	return (count);
}
/**
 * main -main entry
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", calc_change(atoi(argv[1])));
		return (0);
	};
}
