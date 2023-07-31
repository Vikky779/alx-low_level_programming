#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: Nothing
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *ptr, *new, *bgn;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		bgn = ptr;

		while (bgn->next != NULL)
		{
			bgn = bgn->next;
			if (head == bgn->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	free_listp(&ptr);
	return (node);
}
