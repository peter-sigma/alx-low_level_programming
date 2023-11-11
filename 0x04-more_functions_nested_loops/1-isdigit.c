#include "main.h"
/**
 * _isdigit - The function to check digit
 * @c: digit
 * Return: value
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
