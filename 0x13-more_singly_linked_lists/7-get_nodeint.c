#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head:head of list
 * @index:index of the node
 *
 * Return:the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = listint_len(head), count;
	listint_t *temp;

	if (index > nodes || head == NULL || (index > 0 && head->next == NULL))
	{
		exit(0);
	}
	else if (index == 0)
	{
		return (head);
	}
	else
	{
		for (count = 0; count <= index; count++)
		{
			temp = head->next;
		}
		return (temp);
	}
}


/**
 * listint_len - gives the number of elements in a linked list
 * @h:head of list
 *
 * Return:number of elements or 0 on failure
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
