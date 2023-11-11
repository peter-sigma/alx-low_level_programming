
#include "lists.h"
#include <stdio.h>

size_t hare_and_tortoise(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * hare_and_tortoise - A function that counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: pointer to the list if the list is not looped - 0.
 */

size_t hare_and_tortoise(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t size = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				size++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				size++;
				tortoise = tortoise->next;
			}

			return (size);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function to print the list
 * @head: pointer to the beggining of the list
 * Return: size
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size, index = 0;

	size = hare_and_tortoise(head);

	if (size == 0)
	{
		for (; head != NULL; size++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < size; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (size);
}




