#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct form_skeleton - a struct that stores the functions
 * that will print thecorresponding character
 * @a: the format character
 * @print: fuction to print
 */
typedef struct form_skeleton
{
	char a;
	void (*print)(va_list);
} forms;
#endif
