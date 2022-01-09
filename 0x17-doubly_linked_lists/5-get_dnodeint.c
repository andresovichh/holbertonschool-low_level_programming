#include "lists.h"

/**
 * @brief 
 * 
 * 
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