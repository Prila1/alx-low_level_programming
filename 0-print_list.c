#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *present = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		num++;
		current = current->next;
	}
	return (count);
}
