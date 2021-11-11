#include "lists.h"

/**
 * add_node_end - add a node at the end
 * @head: head ptr
 * @str: str
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/** ptr to move where head points to*/
	list_t *new_end;

	list_t *last = *head;
	/** var to store new str*/
	char *new_str;
	/** duplicate str*/
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	/** Allocate mem*/
	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	new_end->str = new_str;
	/**
	 * 3. This new node is going to be the last node, so make next
	 * of it as NUL
	 */
	new_end->next =  NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_end;
	return (0);


}
