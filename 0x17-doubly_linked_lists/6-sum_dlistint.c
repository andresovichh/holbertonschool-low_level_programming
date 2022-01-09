#include "lists.h"

/**
 * sum_dlistint - retruns sum of data at all nodes
 * @head: ptr to head
 * Return: sum of data at nodes
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
int sum = 0;

if (head == NULL)
return (0);
tmp = head;
while (tmp->next != NULL)
{
sum = sum + tmp->n;
tmp = tmp->next;
}
if (tmp->next == NULL)
{
sum = sum + tmp->n;
}
return (sum);
}
