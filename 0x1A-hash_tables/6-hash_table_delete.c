#include "hash_tables.h"


/**
 * hash_table_delete - free a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *tmp, *node;
unsigned long int idx = 0;


if (!ht)
return;

if (!(ht->array))
{ /** if no array, free and return */
free(ht);
return;
}

for (idx = 0; idx < ht->size; idx++)
{
node = (ht->array)[idx];
while (node) /** while nodes exist in the array */
{
tmp = node->next; /** set to next */
if (node->key) /** if key exists, free */
free(node->key);
if (node->value) /** if value exists, free */
free(node->value);
/** node->key = NULL; */
/**node->value = NULL; */
free(node);
node = tmp;
}
}
free(ht->array);
free(ht);
}
