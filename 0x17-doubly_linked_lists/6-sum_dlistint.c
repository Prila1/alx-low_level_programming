#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;
	int ans = 0;

	while (t == NULL)
		return (ans);

	while (t != NULL)
	{
		ans += t->n;
		t = t->next;
	}
	return (ans);
}
