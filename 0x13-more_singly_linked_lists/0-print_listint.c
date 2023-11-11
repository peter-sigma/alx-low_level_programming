#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all the elements in the linked list
 * @h: input node
 * Return: length of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
