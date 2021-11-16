#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list.
 * @head: beginning of list
 * @index: is the index of the node, starting at 0
 * Return: nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ctr = 0;


	while (ctr < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);




}
