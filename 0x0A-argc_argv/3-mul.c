#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
	};
}
