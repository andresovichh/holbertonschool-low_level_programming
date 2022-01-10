#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *i = *h, *new;
unsigned int nbr_of_nodes = 0;
if (!h || (*h == NULL && idx != 0))
return (NULL);

while (i->next != NULL)
{
i = i->next;
nbr_of_nodes++;
}
if (idx > nbr_of_nodes)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
else if (idx == nbr_of_nodes)
return (add_dnodeint_end(h, n));
else
{
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
}
