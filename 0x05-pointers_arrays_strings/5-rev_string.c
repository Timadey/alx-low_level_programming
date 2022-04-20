#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char *sw = "";
	int c = 0;


	strcpy( sw, s);
	while (len > -1)
	{
	printf ("c %d\n", c);
	printf ("length %d\n", len);
		s[c] = sw[len];
	printf ("s[w] %c\n", sw[len]);
	printf ("s[c] %c\n", s[c]);
		len--;
		c++;
	};
	printf ("sw %s\n", sw);
}
