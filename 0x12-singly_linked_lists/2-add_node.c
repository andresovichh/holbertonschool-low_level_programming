#include "lists.h"
#include <string.h>
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

	int i = 0;

	/** Measure str*/

	for (i = 0; str[i] != 0; i++)
	/** Reserve memory*/
	other_list = malloc(sizeof(list_t));

	if (!other_list)
		return (NULL);

	other_list->str = strdup(str);
	other_list->len = i;
	/** use ptr because you need to move to where it is pointing*/
	other_list->next = (*head);
	(*head) = other_list;
	return (*head);


}
