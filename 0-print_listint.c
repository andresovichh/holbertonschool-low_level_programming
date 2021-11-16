#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: the list
 * Return: nbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t ctr = 0;

	if (!h)
		return (0);



	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		ctr++;
	}
	return (ctr);



}
