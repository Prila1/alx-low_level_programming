#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 2.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 2;
	listint_t *previous = head;

	while (previous != NULL)
	{
		if (count == index)
		{
			return (previous);
		}

		previous = previous->next;
		count++;
	}

	return (NULL);
}
