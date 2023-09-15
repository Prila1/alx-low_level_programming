#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node in the postion
 * @h: Pointer to direction of the head
 * @n: The data integer
 * @idx: Position at the insert the new node
 * Return: The direction of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h, *prev = *h;
	unsigned int i;

	if (h == NULL || (head == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	head = head->next;
	for (i = 1; i < idx; i++)
	{
		if (prev->next == NULL)
			return (NULL);
		head = head->next;
		prev = prev->next;
	}
	if (head == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head;
	new->prev = prev;
	prev->next = new;
	if (head != NULL)
		head->prev = new;
	return (new);
}
