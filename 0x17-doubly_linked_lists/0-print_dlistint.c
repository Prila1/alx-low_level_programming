#include "lists.h"

/**
 * print_dlistint - Prints all the nodes of ll
 * @h: Is the pointer to node structure
 * Return: the amount of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
