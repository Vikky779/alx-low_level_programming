#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 * Return: nth node but if node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g;

	for (g = 0; g < index && head != NULL; g++)
	{
		head = head->next;
	}

	return (head);
}
