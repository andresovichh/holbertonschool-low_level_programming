#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: The hash_table_t struct or null
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
/** 1. create the instance of the table */
hash_table_t *a_table;
/** 2. try to allocate memory */
a_table = malloc(sizeof(hash_node_t));
if (!a_table)
return (NULL);
a_table->size = size;
/** malloc the hash_node_t array struct */
a_table->array = malloc(sizeof(hash_table_t) * size);
if (!a_table->array)
return (NULL);
return (a_table);
}
