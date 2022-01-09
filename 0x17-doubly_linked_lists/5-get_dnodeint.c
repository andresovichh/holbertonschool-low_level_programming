#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: ptr to head
 * @index: index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
if (!head)
return (NULL);

while (index)
{
head = head->next;
if (!head)
return (NULL);
index--;
}
return (head);
}