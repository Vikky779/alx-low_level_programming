#include "lists.h"
/**
 * add_node - This adds a new node at the beginning of list.
 * @head: head of the linked list.
 * @str: string to store in list.
 * Return: Address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *bgn;
	size_t ch;

	bgn = malloc(sizeof(list_t));
	if (bgn == NULL)
		return (NULL);

	bgn->str = strdup(str);

	for (ch = 0; str[ch]; ch++)
		;

	bgn->len = ch;
	bgn->next = *head;
	*head = bgn;

	return (*head);
}
