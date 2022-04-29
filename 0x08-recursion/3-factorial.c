/**
 * factorial - returns the factorial of a given number.
 * @n: the number
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	};
	return (n * factorial(n - 1));
}