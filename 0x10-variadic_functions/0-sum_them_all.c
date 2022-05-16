#include <stdarg.h>
/**
 * sum_them_all - summ all its parameter
 * @n: number of paramters to sum
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(param, n);
	for (i = 0; i < n; i++)
		sum += va_arg(param, int);
	va_end(param);
	return (sum);
}
