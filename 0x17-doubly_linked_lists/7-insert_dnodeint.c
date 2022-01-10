#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *new;
if (!h || (*h == NULL && idx != 0))
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));
while (idx != 1)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
idx--;
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
return (new);
}
