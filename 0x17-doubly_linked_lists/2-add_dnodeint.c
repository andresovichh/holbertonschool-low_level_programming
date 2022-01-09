#include "lists.h"
/**
 * add_dnodeint - inserts node at begining of list
 * @head: ptr to ptr of head
 * @n: nbr of nodes?
 * Return: Always 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *i = head;
i->n = n;

i->next = (*head);
i->prev = NULL;
if ((*head) != NULL)
{
(*head)->prev = i;
}
(*head) = i;

return ()
}