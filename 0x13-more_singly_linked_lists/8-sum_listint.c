#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list
 * @head: beginning of list
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);




}
