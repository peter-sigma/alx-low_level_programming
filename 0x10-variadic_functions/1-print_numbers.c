#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -function to print numbers passed as urguments
 * @n: number of urguments passed
 * @separator: A pointer to string
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int index = 0;

	va_start(pa, n);

	while (index < n)
	{
		printf("%d", va_arg(pa, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		index++;
	}

	printf("\n");

	va_end(pa);
}

