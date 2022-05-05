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

	while (i < strlen(str2))
	{
		*(str1 + *index) = *(str2 + i);
		*index += 1;
		i++;
	};
}
char *str_concat(char *s1, char *s2)
