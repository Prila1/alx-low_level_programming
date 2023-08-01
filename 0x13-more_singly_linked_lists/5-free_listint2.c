#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *previous;

	while (*head != NULL)
	{
		previous = *head;
		*head = (*head)->next;
		free(previous);
	}

	*head = NULL;
}
