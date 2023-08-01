#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current)
	{
		size++;
		temp = current;
		current = current->next;

		free(temp);

		if (temp <= current)
		{
			*h = NULL;
			return (size);
		}
	}

	*h = NULL;
	return (size);
}

