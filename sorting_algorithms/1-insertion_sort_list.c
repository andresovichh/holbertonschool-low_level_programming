#include "sort.h"

/**
 * @brief 
 * 
 */
void insertion_sort_list(listint_t **list)
{
listint_t *presentNode, *nextNode;


/** 
 * first we have to point to the second node,
 * to check if its value is larger than current
 * node's value
 */

nextNode = (*list)->next;

while (nextNode)
{
/**
 * then we walk the nodes
 */
presentNode = nextNode;
nextNode = nextNode->next;

while (presentNode && presentNode->prev)
{
if (presentNode->n > presentNode->prev->n)
printf("%d", presentNode->n);
}

}
}