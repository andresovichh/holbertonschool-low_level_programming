#include "lists.h"

/**
 *add_dnodeint_end - 
 *@head: ptr to head
 *@n: data for the node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/** first we create the node & a tmp*/
dlistint_t *new_node;
dlistint_t *tmp;

tmp = *head;
if (!head)/** if no head, return NULL*/
return (NULL);
new_node = malloc(sizeof(dlistint_t));/** second allocate memory to it*/
/** check if it worked*/
if (new_node == NULL)
return (NULL);
new_node->n = n;/** assign data to new node and next ptr to null*/
new_node->next = NULL;
/** if empty list*/
if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
return (new_node);
}
/** the get to last node*/
while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = new_node;
new_node->prev = tmp;
return (new_node);
}
