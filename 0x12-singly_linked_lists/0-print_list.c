#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: nomber of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)/**if str is NULL, print this*/
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		/**If h->str exists,print whatever is in len and atr*/
		h = h->next;
		size++;
	}
	return (size);
}
