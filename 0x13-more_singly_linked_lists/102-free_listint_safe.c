#include "lists.h"
/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 * Return: Nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size of list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listp_t *ptr, *new, *bgn;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		bgn = ptr;

		while (bgn->next != NULL)
		{
			bgn = bgn->next;
			if (*h == bgn->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (node);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		node++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (node);
}
