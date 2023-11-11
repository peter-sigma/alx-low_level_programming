#include "main.h"
/**
 * _print_rev_recursion - Function to print in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s += 1;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
