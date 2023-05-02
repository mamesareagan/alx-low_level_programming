#include "lists.h"

/**
 * free_listint2 - frees a list
 *@head:head of list
 *
 * Return:Always none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
