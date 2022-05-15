#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int res = 0;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	};
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	};

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	};
	res = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
