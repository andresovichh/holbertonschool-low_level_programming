#include "lists.h"
/**
 * add_dnodeint - inserts node at begining of list
 * @head: ptr to ptr of head
 * @n: nbr of nodes?
 * Return: Always 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *i;/** create the new node*/

i = malloc(sizeof(dlistint_t));/**allocate mem*/
if (i == NULL)
{
return (NULL);
}
i->n = n;/** insert data to the newly created node*/
i->next = (*head);/** point next ptr to head*/
i->prev = NULL;/** point prev ptr to NULL*/
if ((*head) != NULL)
{
(*head)->prev = i;
}
(*head) = i;
return (i);
}