#include "lists.h"
/**
 * add_dnodeint_end - a function to add a node to the end of the list
 * @head:  first node
 * @n: value of the new node
 * Return:  address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}

	new_node->prev = temp;
	new_node->next = NULL;
	temp->next = new_node;
	return (new_node);
}

