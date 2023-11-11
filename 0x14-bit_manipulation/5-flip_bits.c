#include "main.h"
/**
 * flip_bits - a function to flip bit
* @n: first input number
 * @m: second input number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cn;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cn = x >> i;
		if (cn & 1)
			count++;
	}

	return (count);
}
