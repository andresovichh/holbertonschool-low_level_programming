#include "lists.h"

/**
 * listint_len - returns nmbr of elements in a linked list
 * @h: lists
 * Return: nmbr of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while (h)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
