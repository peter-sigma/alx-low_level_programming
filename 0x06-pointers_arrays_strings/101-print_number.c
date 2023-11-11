#include "main.h"
/**
 * print_number -function
 * @n: number
 * Return: number
 */
void print_number(int n)
{
	int number;

	number = n;
	if (number < 0)
	{
		_putchar('-');
		number = -n;
	}
	if (number / 10 != 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
