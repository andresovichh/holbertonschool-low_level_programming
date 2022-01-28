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
/** create a node */
hash_node_t *a_node;

if (!key || !ht)
return (0);

/** try to allocate mem for the node */
a_node = malloc(sizeof(hash_node_t));
if (a_node == NULL)
return (0);

a_node->key = strdup(key);
a_node->value = strdup(value);
return (1);
}