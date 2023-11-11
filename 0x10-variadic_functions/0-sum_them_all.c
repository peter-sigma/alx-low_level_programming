#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum all its arguments
 * @n: number of parameters
 * Return: sum of the parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
