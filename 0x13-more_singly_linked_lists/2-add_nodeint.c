#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining of a list
 * @head:pointer to the head of list
 * @n:data for the new node
 *
 * Return:address of new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	if (head == NULL)
		return (NULL);
	nodeA = (listint_t *) malloc(sizeof(listint_t));
	if (nodeA == NULL)
		return (NULL);
	nodeA->n = n;
	nodeA->next = NULL;
	if (*head == NULL)
		*head = nodeA;
	else
	{
		nodeA->next = *head;
		*head = nodeA;
	}
	return (*head);
}

