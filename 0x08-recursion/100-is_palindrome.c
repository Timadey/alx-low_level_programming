#include <string.h>
#include <stdlib.h>
/**
 * rev_str - copys a string in reverse to another
 * string pointer
 * @t: pointer to the string to copy to
 * @s: pointer to the source string
 * @len: length of the source string
 * @ind: index of t
 * Return: void
 */
void rev_str(char *t, char *s, int len, int ind)
{
	if (len >= 0)
	{
		*(t + ind) = *(s + len);
		rev_str(t, s, len - 1, ind + 1);
	};
}
/**
 * is_palidrome - checks if a string is palindrome
 * @s: the pointer to the string
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (0);
	}
	else
	{
		char *t = malloc(len + 1);

		memset(t, 'a', len);
		t[len + 1] = '\0';
		rev_str(t, s, len - 1, 0);
		if (strcmp(t, s) == 0)
			return (1);
		else
			return (0);
	};
}
