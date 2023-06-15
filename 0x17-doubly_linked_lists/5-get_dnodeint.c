#include "lists.h"
/**
 * nodecount - gets number of nodes
 * @h:pointer to head node
 *
 * Return:number of nodes
 */
size_t nodecount(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
/**
 * get_dnodeint_at_index - gets a certain node
 * @head:pointer to head node
 * @index:index to get
 *
 * Return:node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t node_count = nodecount(head);
	dlistint_t *current;
	unsigned int helper;

	if (head == NULL || index > node_count)
		return (NULL);
	helper = 0;
	current = head;
	while (helper < index)
	{
		current = current->next;
		helper++;
	}
	return (current);
}
