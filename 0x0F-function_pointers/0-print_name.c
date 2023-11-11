#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function to print name
 * @name: name
 * @f:  callback function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
