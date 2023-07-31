#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int g;
	listint_t *bef;
	listint_t *next;

	bef = *head;

	if (index != 0)
	{
		for (g = 0; g < index - 1 && bef != NULL; g++)
		{
			bef = bef->next;
		}
	}

	if (bef == NULL || (bef->next == NULL && index != 0))
	{
		return (-1);
	}

	next = bef->next;

	if (index != 0)
	{
		bef->next = next->next;
		free(next);
	}
	else
	{
		free(bef);
		*head = next;
	}

	return (1);
}
