#include "main.h"

int _sqrt_wrapper(int n, int i);
/**
 * _sqrt_recursion - function to return the square root
 * @n: Find the square root of this number
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_wrapper(n, 1));
}
/**
 * _sqrt_wrapper -calculates the natural root
 * @n: The number to find its root
 * @i: The root
 * Return: natural root
 */
int _sqrt_wrapper(int n, int i)
{
	int sqroot = i * i;

	if (sqroot > n)
	{
		return (-1);
	}
	if (sqroot == n)
	{
		return (i);
	}
	return (_sqrt_wrapper(n, ++i));
}

