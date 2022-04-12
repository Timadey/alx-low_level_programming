#include "_putchar.c"
/**
 * main - starting point of the program
 * Description: Write a program that
 * prints _putchar, followed by a new line.
 *
 * The program should return 0
 *
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	};
	_putchar('\n');
};
