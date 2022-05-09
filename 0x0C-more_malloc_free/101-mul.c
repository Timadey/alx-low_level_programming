#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * check_dig - check if a char is digit
 * @arr: the array containing the char
 * @len: length of the array
 * Return: void
 */
void check_dig(char *arr, int len)
{
	int i = 0;

	for (; i < len; i++)
	{
		if (!isdigit(arr[i]))
		{
			printf("Error\n");
			exit(98);
		};
	};
}
/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	check_dig(argv[1], strlen(argv[1]));
	check_dig(argv[2], strlen(argv[2]));
	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
