/**
 * mod_till_zero - find mod of a number till its zero
 * @n: the number
 * @k: the divisor
 * Return: int
 */
int mod_till_zero(int n, int k)
{
	if (n % k == 0)
	{
		if (n == k)
		{
			return (1);
		}
		else
		{
			return (0);
		};
	}
	else
	{
		return (mod_till_zero(n, k + 1));
	};
}
/**
 * is_prime_number - find prime numbers
 *  returns 1 if the input integer is a prime number
 *  otherwise return 0.
 *  @n: the number to find prime
 *  Return: int
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (mod_till_zero(n, 2));
	};
}
