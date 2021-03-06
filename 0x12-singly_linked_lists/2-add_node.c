#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - Adds node at the beginning
 * @head: pointer to begining
 * @str: string - (malloc'ed string)
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/** Create new lis*/
	list_t *other_list;
	char *new_s = strdup(str);
	int i = 0;

	/** Measure str*/

	for (i = 0; str[i] != 0; i++)
	/** Reserve memory*/
	other_list = (list_t *)malloc(sizeof(list_t));

	if (!other_list || !strdup(str))
		return (NULL);

	other_list->str = new_s;
	other_list->len = i;
	other_list->next = *head;

	*head = other_list;
	return (other_list);
}

