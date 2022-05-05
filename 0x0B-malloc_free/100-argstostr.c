#include <string.h>
#include <stdlib.h>
/**
 * append_to_string - appends a string to another
 * @index: pointer to the index
 * @str1: the pointer to the concatenating string
 * @str2: the string to concatenate
 * Return: void
 */
void append_to_string(int *index, char *str1, char *str2)
{
	int i = 0;
	int len = strlen(str2);

	while (i <= len)
	{
		if (*(str2 + i) == '\0')
			*(str1 + *index) = '\n';
		else
			*(str1 + *index) = *(str2 + i);
		*index += 1;
		i++;
	};
}

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int size, index, x, y;
	int *index_ptr;

	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);
		for (y = 0; av[x][y] != '\0'; y++)
			size += 1;
		size += 1;
	};
	concat = malloc((sizeof(char)) * (size + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	};
	index = 0;
	index_ptr = &index;
	for (x = 0; x < ac; x++)
		append_to_string(index_ptr, concat, av[x]);
	*(concat + size) = '\0';
	return (concat);
}
