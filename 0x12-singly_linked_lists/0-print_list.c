#include "lists.h"
/**
 * print_list - prints all elements of  list_t.
 * @h: This is the  singly linked list.
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
