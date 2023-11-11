#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: node
 * @index: index
 * Return: 1 if success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *delete_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	delete_node = temp->next;
	temp->next = delete_node->next;
	free(delete_node);

	return (1);
}
