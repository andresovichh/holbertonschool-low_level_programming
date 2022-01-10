#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: ptr to ptr to head
 * @index: the position of the index
 * Return: 1 if successful -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;

if (*head == NULL)
return (-1);
for (; index != 0; index--)
{
if (tmp == NULL)
return (-1);
tmp = tmp->next;
}
if (tmp == *head)
{
*head = tmp->next;
if (*head != NULL)
(*head)->prev = NULL;
}
return (1);
}
