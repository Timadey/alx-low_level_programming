#include <string.h>
#include <stdlib.h>
/**
 * append_to_string - appends a string to another
 * @index: pointer to index to start append
 * @str1: the pointer to string to append to
 * @str2: pointer of string to append
 * Return: void
 */
void append_to_string(int *index, char *str1, char *str2)
{
	int i = 0;
	int len = strlen(str2);

	while (i < len)
	{
		*(str1 + *index) = *(str2 + i);
		*index += 1;
		i++;
	};
}
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int index = 0;
	int *index_ptr = &index;
	char *concat;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2);
	concat = malloc((sizeof(char) * size + 1));
	if (concat == NULL)
		return (NULL);
	append_to_string(index_ptr, concat, s1);
	append_to_string(index_ptr, concat, s2);
	*(concat + size) = '\0';
	return (concat);
}
