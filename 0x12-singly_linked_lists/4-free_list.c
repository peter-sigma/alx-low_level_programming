#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a program that frees a linked list
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

