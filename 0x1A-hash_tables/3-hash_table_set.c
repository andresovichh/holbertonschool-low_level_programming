#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table 
 * 
 * @param ht:  the hash table you want to add or update the key/value to
 * @param key: the key 
 * @param value:  is the value associated with the key.
 * @return: 1 if succeed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *value_copy;
unsigned long int index, i;

if (ht == NULL || key == NULL || value == NULL)
return (0);

value_copy = strdup(value);
if (value_copy == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)

}