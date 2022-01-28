#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: The hash_table_t struct or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *a_table;
unsigned long int i = 0;

if (size == 0)
return (NULL);

a_table = malloc(sizeof(hash_table_t));
if (a_table == NULL)
{
free(a_table);
return (NULL);
}
a_table->array = malloc(sizeof(hash_node_t *) * size);
if (a_table->array == NULL)
{
free(a_table->array);
return (NULL);
}
a_table->size = size;
for (i = 0; i < size; i++)
a_table->array[i] = NULL;

return (a_table);
}
