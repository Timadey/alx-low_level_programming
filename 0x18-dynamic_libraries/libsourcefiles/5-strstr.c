#include <string.h>
/**
 * _strstr - locates a substring.
 * finds the first occurrence of the substring needle
 *  in the string haystack.
 *  The terminating null bytes (\0) are not compared
 *  @haystack: a string
 *  @needle: a string
 *  Return: a pointer to the beginning of the located substring
 *  or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
