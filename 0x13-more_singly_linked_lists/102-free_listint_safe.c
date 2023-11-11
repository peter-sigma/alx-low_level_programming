#include "lists.h"

/**
 * free_listint_safe - a function that frees a linked list
 * @h: pointer to the first node of our linked list
 * Return: number of elements in the linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int n;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}

