#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function name
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s += 1;
	_puts_recursion(s);
}

