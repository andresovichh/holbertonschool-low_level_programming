#include "lists.h"


/**
 * print_dlistint - prints a dl list
 * @h: begining of list 
 * Return: Always 0 
 */

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *i = h;

    for(; i != NULL; i = i->next)
    {
        printf("%d\n", i->n);
    };
return (0);
}