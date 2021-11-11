#include "lists.h"

/**
 * list_len - returns the number of elements in linked list_t
 * @h: head
 * Return: Number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t ctr = 0;

	while (h)
	{
		h = h->next;
		ctr++;
	}
return (ctr);

}


