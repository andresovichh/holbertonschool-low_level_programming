#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *tmp; /** a tmp to traverse */
unsigned long int i = 0;
char *comma;

if (!ht)
return;

printf("{");
comma = "";
/** traverse the nodes */
for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i]; /** got to place i in array*/
{
while (tmp)
{
printf("%s'%s': '%s'", comma, tmp->key, tmp->value);
comma = ", ";
tmp = tmp->next;
}
}
}
printf("}");
}
