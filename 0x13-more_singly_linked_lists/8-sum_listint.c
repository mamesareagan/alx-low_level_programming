#include "lists.h"

/**
 * sum_listint - finds sum of all elements of list
 * @head:head of list
 *
 * Return:Sum of al data(n) of list
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	else if (head->next == NULL)
	{
		sum += head->n;
		return (sum);
	}
	else
	{
		while (head->next != NULL)
		{
			temp = head;
			head = head->next;
			sum += temp->n;
		}
		sum += head->n;
	}
	return (sum);
}
