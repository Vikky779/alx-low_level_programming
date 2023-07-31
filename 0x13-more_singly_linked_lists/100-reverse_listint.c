#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pnt;
	listint_t *n;

	pnt = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = pnt;
		pnt = *head;
		*head = n;
	}

	*head = pnt;
	return (*head);
}
