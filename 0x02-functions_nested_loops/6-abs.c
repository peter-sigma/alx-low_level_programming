#include "main.h"
/**
 * _abs - Entry point
 * @c: Check number
 * Return: Absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val = c *  -1;

		return (abs_val);
	}
	return (c);
}
