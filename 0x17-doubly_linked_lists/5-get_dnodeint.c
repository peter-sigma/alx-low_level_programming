#include "lists.h"
/**
 * get_dnodeint_at_index - function to return the nth node
 * @head: list head
 * @index: nth index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
