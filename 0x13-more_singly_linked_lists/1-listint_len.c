#include "lists.h"
#include <stdio.h>

#include <stddef.h>
/**
 * listint_len - a function to return the length of the list
 * @h: head
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	const listint_t *node = h;

	while (node)
	{
		length++;
		node = node->next;
	}
	return (length);
}
