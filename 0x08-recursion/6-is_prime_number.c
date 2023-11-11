#include "main.h"
int prime_number(int n, int i);
/**
 *is_prime_number
 * @n: number to check
 *Return: 1 for prime and 0 for non prime number
 */
int is_prime_number(int n)
{
	return (prime_number(n, 1));
}
/**
 * prime_number - function
 * @n: number entered
 * @i: evaluate
 * Return: value
 */
int prime_number(int n, int i)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_number(n, ++i));
}

