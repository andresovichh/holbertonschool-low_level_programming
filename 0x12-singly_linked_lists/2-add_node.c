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
	unsigned int l;
	/** create vars*/
	char *new_str;/* I need this because I need to change to where it points*/
	/** 1. Allocate node*/
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/** 1.1. Duplicate str*/

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (l = 0; str[l] != 0; l++)


	/** 2. put in the data*/
	new_node->str = new_str;

	/** 3. Make next of new node as head*/
	new_node->len = l;
	new_node->next = (*head);

	/** 4. move the head to pint to the new node*/

	(*head) = new_node;



return (0);
}
