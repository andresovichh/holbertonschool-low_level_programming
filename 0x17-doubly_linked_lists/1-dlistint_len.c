#include "lists.h"

/**
 * dlistint_len - length of a list
 * @h: list head
 * Return: Always 0
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *i = h;
size_t nodes = 0;

for (; i != NULL; i = i->next)
{
nodes++;
}
return (nodes);
}
