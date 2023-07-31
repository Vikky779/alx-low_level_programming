#include "lists.h"
/**
 * pop_listint - Deletes the head node of list
 * @head: Head of a list.
 * Return: Head node's data.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	data = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (data);
}
