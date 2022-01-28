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
<<<<<<< HEAD
hash_node_t *a_node;
char *value_copy;
unsigned long int index, i;
=======
hash_node_t *a_node, *tmp;
unsigned int index;
>>>>>>> 0718521fd5ae120c3c1db151db07654b12fcc223

index = key_index((const unsigned char *) key, ht->size);

if (ht == NULL)
{
return (0);
}

<<<<<<< HEAD
/** try to allocate mem to a node, exit if fail */
a_node = malloc(sizeof(hash_node_t));
if (!a_node)
=======
a_node =  malloc(sizeof(hash_node_t));
if (!a_node)
{
>>>>>>> 0718521fd5ae120c3c1db151db07654b12fcc223
return (0);
}
a_node->key = strdup(key);
a_node->value = strdup(value);

<<<<<<< HEAD
a_node->key = strdup(key);
a_node->value = strdup(value);

node_handler(ht, a_node);


}


/**
 * node_handler - handles a node
 * @ht: the hash table of the lists
 * @node: the linked list to add or update 
=======
node_handler(ht, a_node);
return (0);
}

/**
 * @brief 
 * 
>>>>>>> 0718521fd5ae120c3c1db151db07654b12fcc223
 */

void node_handler(hash_table_t *ht, hash_node_t *node)
{
<<<<<<< HEAD
/** getting the index & creating a *tmp */
unsigned long int i = key_index(node->key, ht->size);
hash_node_t *tmp = ht->array[i];

/** check if at last spoot */
if (ht->array[i] != NULL)
{
tmp = ht->array[i];
while(tmp != NULL) /** walk the nodes*/
{/** if there is a coincidence */
=======
unsigned long int i = key_index(node->key, ht->size);
hash_node_t *tmp = ht->array[i];

if (ht->array[i] != NULL)
{
tmp = ht->array[i];
while (tmp != NULL)
{
>>>>>>> 0718521fd5ae120c3c1db151db07654b12fcc223
if (strcmp(tmp->key, node->key) == 0)
{
break;
}
tmp = tmp->next;
}
<<<<<<< HEAD
if (tmp == NULL) /** if at last node*/
{
node->next = ht->array[i];
ht->array[i] = node;
}
else
{
free(tmp->value);
tmp->value = strdup(node->value);
free(node->value);
free(node->key);
free(node);
=======
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
>>>>>>> 0718521fd5ae120c3c1db151db07654b12fcc223
}
}
else
{
node->next = NULL;
ht->array[i] = node;
}
<<<<<<< HEAD
}
=======
}
>>>>>>> 0718521fd5ae120c3c1db151db07654b12fcc223
