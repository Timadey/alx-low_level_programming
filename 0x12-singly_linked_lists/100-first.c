#include <stdio.h>
/**
 * construct_main - execute before main function
 * Return: void
 */
void  __attribute__((constructor)) construct_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
