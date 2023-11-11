#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: Number
 * Return: value of the digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
