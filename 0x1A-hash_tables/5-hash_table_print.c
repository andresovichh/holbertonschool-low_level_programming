#include "hash_tables.h"

/**
 * @brief 
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *tmp; /** a tmp to traverse */
unsigned long int i = 0;
printf("{");
/** traverse the nodes */
while (i < ht->size)
{
tmp = ht->array[i];
{
while (tmp) /** walk untill null */
{
printf("%s", tmp->key);
/** check if next is null */
if (ht->array[i +1] == NULL)
break;

tmp = tmp->next;
}
i++;
}
}
}