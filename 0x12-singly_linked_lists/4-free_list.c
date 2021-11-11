#include "lists.h"
/**
 * free_list - frees list nodes
 * @head: begining of nodes
 *
 */



void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
