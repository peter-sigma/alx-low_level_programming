#include "lists.h"
/**
 * sum_listint - function to add the values of all the nodes
 * @head: node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
