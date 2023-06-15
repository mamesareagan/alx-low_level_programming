#include "lists.h"

/**
 * sum_dlistint -  sums of all the data (n) of a dlistint_t linked list.
 * @head:pointer to head node
 *
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
