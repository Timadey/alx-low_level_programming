#include <string.h>
#include <stdlib.h>
/**
 * append_to_string - appends a string to another
 * @index: pointer to index to start append
 * @str1: the pointer to string to append to
 * @str2: pointer of string to append
 * @n: how many bytes to concatenate
 * Return: void
 */
void append_to_string(int *index, char *str1, char *str2, int n)
{
	int i = 0;

	while (i < n)
	{
		*(str1 + *index) = *(str2 + i);
		*index += 1;
		i++;
	};
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first n byte of s2
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int index = 0;
	int *index_ptr = &index;
	char *concat;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	size = strlen(s1) + n;
	concat = malloc(sizeof(char) * size + 1);
	if (concat == NULL)
		return (NULL);
	append_to_string(index_ptr, concat, s1, strlen(s1));
	append_to_string(index_ptr, concat, s2, n);
	*(concat + size) = '\0';
	return (concat);
}
