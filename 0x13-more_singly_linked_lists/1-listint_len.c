
#include "lists.h"

/**
 * listint_len - print the number of elements
 * @h:lsit
 * Return: number of elements
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
