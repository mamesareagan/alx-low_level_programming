#include "lists.h"
#include <stdio.h>

/**
 * print_listint -prints all elements of list
 *@h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int j;

	if (h == NULL)
	{
		return (0);
	}
	for (j = 1; h->next != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (j);
}

