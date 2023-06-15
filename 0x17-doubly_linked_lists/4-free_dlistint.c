#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head:head ptr
 *
 * Return:nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
