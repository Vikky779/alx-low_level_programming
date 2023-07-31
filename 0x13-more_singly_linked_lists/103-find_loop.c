#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address of node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *addr;
	listint_t *bef;

	addr = head;
	bef = head;
	while (head && addr && addr->next)
	{
		head = head->next;
		addr = addr->next->next;

		if (head == addr)
		{
			head = bef;
			bef =  addr;
			while (1)
			{
				addr = bef;
				while (addr->next != head && addr->next != bef)
				{
					addr = addr->next;
				}
				if (addr->next == head)
					break;

				head = head->next;
			}
			return (addr->next);
		}
	}

	return (NULL);
}
