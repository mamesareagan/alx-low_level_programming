#include "lists.h"

/**
 * pop_listint - deletes headnode of a list
 * @head:head of list
 *
 * Return:heads data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = temp->next;
		value = temp->n;
		free(temp);
	}
	return (value);
}
