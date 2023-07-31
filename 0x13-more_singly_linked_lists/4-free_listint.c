#include "lists.h"
/**
 * free_listint - Frees a linked list
 * @head: head of a list.
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux

	while ((aux = head) != NULL)
	{
		head = head->next;
		free(aux);
	}
}
