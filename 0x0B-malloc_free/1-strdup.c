#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a string
 * @str: the string to copy
 * Return: a pointer to the memory of the copied string
 */
char *_strdup(char *str)
{
	char *new;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new = malloc((strlen(str) + 1) * sizeof(*str));
	if (new == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(new + i) = *(str + i);
		i++;
	};
	return (new);
}
