#include "lists.h"


/**
 * print_listint -  prints all elements of a list
 * @h: list
 * Return: Nbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t ctr;

	if (!h)
		return (0);


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ctr++;
	}
	return (ctr);

}
