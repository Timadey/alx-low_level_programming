/**
 * find_sqrt - find the square root of a number
 * @n: the number
 * @k: the starting multiplication
 * Return: int
 */
int find_sqrt(int n, int k)
{
	if (n == k)
	{
		return (k);
	}
	else if (n == k * k)
	{
		return (k);
	}
	else
	{
		return (find_sqrt(n, k + 1));
	};
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find its sqrt
 * Return: int value
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 2));
	};
}
