#include "lists.h"
/**
 * counter -gets no of nodes
 * @h:head ptr
 * Return:count
 */
size_t counter(const dlistint_t *h)
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
 * insert_dnodeint_at_index - insert a node at index
 * @h:head ptr
 * @idx:index
 * @n:value of new node
 * Return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count = counter(*h);
	dlistint_t *current, *new_node;
	unsigned int helper;

	if (idx > count)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((*h) == NULL || idx == 0)
		new_node = add_dnodeint(h, n);
	else if (idx == count)
		new_node = add_dnodeint_end(h, n);
	else
	{
		current = (*h);
		helper = 0;
		while (helper < idx - 1)
		{
			current = current->next;
			helper++;
		}
		new_node->next = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
