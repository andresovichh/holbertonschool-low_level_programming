#include "lists.h"

/**
 * free_dlistint - frees a dll
 * @head: ptr to head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;

while (tmp != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}