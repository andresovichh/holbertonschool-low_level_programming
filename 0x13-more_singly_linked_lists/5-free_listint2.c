#include "lists.h"

/**
 * free_listint2 - frees a listint
 * @head: Ptr to head
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
