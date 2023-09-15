#include "lists.h"

/**
 * free_dlistint - Free the list
 * @head: Head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem;

	while (head != NULL)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}
