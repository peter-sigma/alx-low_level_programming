#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -function to print string passed in the function parameter
 * @separator: strings passed
 * @n: The number of urguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mystr;
	char *str;
	unsigned int index = 0;

	va_start(mystr, n);

	while (index < n)
	{
		str = va_arg(mystr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		index++;
	}

	printf("\n");

	va_end(mystr);
}

