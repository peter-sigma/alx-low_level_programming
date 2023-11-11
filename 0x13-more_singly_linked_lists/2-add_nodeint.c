#include "lists.h"
/**
 * add_nodeint - function to add a node to the beginning of the list
 * @head: The first node
 * @n: value of the new node
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_node;

	my_node = malloc(sizeof(listint_t));

	if (!my_node)
		return (NULL);

	my_node->n = n;
	my_node->next = *head;
	*head = my_node;

	return (my_node);
}
