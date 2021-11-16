#include "lists.h"

/**
 * add_nodeint_end - add a node at the end
 * @head: head ptr
 * @n: str
 * Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/** ptr to move where head points to*/
	listint_t *new_end, *z;
	/** Allocate mem*/
	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	/**
	 * 3. This new node is going to be the last node, so make next
	 * of it as NUL
	 */
	new_end->next =  NULL;

	if ((*head) == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	z = *head;

	while (z->next != NULL)
		z = z->next;
	z->next = new_end;
	return (new_end);


}

