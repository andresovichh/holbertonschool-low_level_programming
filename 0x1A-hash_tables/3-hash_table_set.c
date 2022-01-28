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
hash_node_t *a_node, *tmp;
unsigned int index;

index = key_index((const unsigned char *) key, ht->size);

if (ht == NULL)
{
return (0);
}

a_node =  malloc(sizeof(hash_node_t));
if (!a_node)
{
return (0);
}
a_node->key = strdup(key);
a_node->value = strdup(value);

node_handler(ht, a_node);
return (0);
}

/**
 * @brief 
 * 
 */

void node_handler(hash_table_t *ht, hash_node_t *node)
{
unsigned long int i = key_index(node->key, ht->size);
hash_node_t *tmp = ht->array[i];

if (ht->array[i] != NULL)
{
tmp = ht->array[i];
while (tmp != NULL)
{
if (strcmp(tmp->key, node->key) == 0)
{
break;
}
tmp = tmp->next;
}
if (tmp == NULL)
{
node->next = ht->array[i];
ht->array[i] =  node;
}
else
{
  free(tmp->value);
  tmp->value = strdup(node->value);
  free(node->value);
  free(node->key);
  free(node);
}
}
else
{
node->next = NULL;
ht->array[i] = node;
}
}
