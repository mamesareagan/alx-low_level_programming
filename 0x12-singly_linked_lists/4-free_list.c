#include "lists.h"
/**
 * free_list - Frees a list of nodes
 * @head: pointer to the first element of the list
 */

void free_list(list_t *head)
{
	list_t *t;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
	free(head->str);
	free(head);
}
