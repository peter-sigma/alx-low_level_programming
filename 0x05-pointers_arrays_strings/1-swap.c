#include <stdio.h>
/**
 * 200~swap_int -Entry
 * @a: First int
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
