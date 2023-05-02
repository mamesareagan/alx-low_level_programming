#include "lists.h"

/**
 * listint_len - gives the number of elements in a linked list
 * @h:head of list
 *
 * Return:Number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int j;

	if (h == NULL)
		return (0);
	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
