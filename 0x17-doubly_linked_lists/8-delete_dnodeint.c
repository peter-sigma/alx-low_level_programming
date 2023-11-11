#include "lists.h"
/**
 * delete_dnodeint_at_index - function to return the nth node
 * @head: list head
 * @index: index
 * Return: 1 if successiful or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;
	dlistint_t *prv;
	dlistint_t *nxt;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	prv = temp->prev;
	nxt = temp->next;
	if (index > i)
		return (-1);
	prv->next = nxt;
	nxt->prev = prv;
	free(temp);
	return (1);
}
