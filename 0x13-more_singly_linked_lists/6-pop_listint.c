#include "lists.h"
/**
 * pop_listint - function to delete head of the linked list
 * @head: first node
 * Return: the data in the list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}

