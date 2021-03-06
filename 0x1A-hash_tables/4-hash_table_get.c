#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: hash table to look into
 * @key: The key we are looking for
 * Return: NULL or the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *tmp;
char *a_key;

/** try to malloc memory */
tmp = malloc(sizeof(hash_node_t));
if (!tmp || !ht || !key)
return (NULL);
/** duplicate the key */
a_key = strdup(key);
/** get the index of the key we're looking for*/
i = key_index((const unsigned char *) key, ht->size);
tmp = ht->array[i];

while (tmp != NULL)
{/** traverse the nodes*/
if (strcmp(tmp->key, a_key) == 0)
{/** if match, exit loop*/
break;
}
tmp = tmp->next;
}
free(a_key);
if (tmp == NULL)
return (NULL);

return (tmp->value);
}
