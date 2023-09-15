#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node
 * @head: Pointer to the head
 * @index: The node index
 * Return: The direction of the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
