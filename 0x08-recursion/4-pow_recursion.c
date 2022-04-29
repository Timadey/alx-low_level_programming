/**
 * _pow_recursion - gives the value of x raised to the power of y.
 * @x: the number
 * @y: the power
 * Return: the result in int
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	};
}
