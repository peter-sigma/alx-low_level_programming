#include "lists.h"
/**
 * get_nodeint_at_index - function to return the nth node
 * @head: list head
 * @index: nth index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}

