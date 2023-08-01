#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the  elements of a `listint_t` list
 * @h: linked list head
 * listint_t - the constants 
 * Return:the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *m;
	size_t count;

	for (m = h, count = 0; m != NULL; count++, m = m->next)
		printf("%d\n", m->n);

	return (count);
}
