#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: begining of list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node_data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (node_data);
}
