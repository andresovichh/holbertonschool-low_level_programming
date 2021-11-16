#include "lists.h"

/**
 * add_nodeint - adds node at beginning of a listint_t list
 * @head: Head
 * @n: const
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /** new node ptr*/

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
