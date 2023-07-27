#include "lists.h"
/**
 * free_list - This frees a list
 * @head: Head of the linked list.
 * Return: No return.
 */
void free_list(list_t *head)
{
	list_t *prs;

	while ((prs = head) != NULL)
	{
		head = head->next;
		free(prs->str);
		free(prs);
	}
}
