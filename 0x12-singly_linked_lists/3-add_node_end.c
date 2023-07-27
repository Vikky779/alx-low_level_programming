#include "lists.h"
/**
 * add_node_end - This adds a new node at the end of list
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: Address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *bgn, *temp;
	size_t ch;

	bgn = malloc(sizeof(list_t));
	if (bgn == NULL)
		return (NULL);

	bgn->str = strdup(str);

	for (ch = 0; str[ch]; ch++)
		;

	bgn->len = ch;
	bgn->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = bgn;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = bgn;
	}

	return (*head);
}
