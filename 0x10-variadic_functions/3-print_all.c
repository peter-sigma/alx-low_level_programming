#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -function to print all the parameters no matter the type
 * @format: the type of arguments that are passed in the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list variadic_list;

	va_start(variadic_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(variadic_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(variadic_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(variadic_list, double));
					break;
				case 's':
					str = va_arg(variadic_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(variadic_list);
}

