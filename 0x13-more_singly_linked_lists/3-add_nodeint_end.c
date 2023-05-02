#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head:head of list
 * @n:value of new head
 *
 * Return:Adress of new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *temp;

	if (head == NULL)
		return (NULL);
	last = (listint_t *) malloc(sizeof(listint_t));
	if (last == NULL)
	{
		return (NULL);
	}
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
	}
	return (temp);
}
