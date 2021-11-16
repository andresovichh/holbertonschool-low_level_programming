#include "lists.h"

/**
 * listint_len - returns nmbr of elements in a linked list
 * @h: lists
 * Return: nmbr of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	/** Create a counter*/
	size_t ctr = 0; /** initialize to 0!!!*/

	while (h)
	{
		h = h->next;
		ctr++;
	}
return (ctr);


}
