#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all of the elements of a linked list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int li;

	if (h == NULL)
		return (0);
	for (li = 1; h->next != NULL; li++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (li);
}
