#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of list
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addr;

	addr = malloc(sizeof(listint_t));

	if (addr == NULL)
		return (NULL);

	addr->n = n;
	addr->next = *head;
	*head = addr;

	return (*head);
}
