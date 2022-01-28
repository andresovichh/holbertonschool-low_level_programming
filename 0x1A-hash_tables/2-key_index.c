#include "hash_tables.h"

/**
 * key_index - Gets the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: Always 0
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int i = 0, hash = 0;

if (key == NULL)
return (0);
if (size == 0)
return (0);
while (key && key[i])
{
hash = (hash + key[i]) % size;
i++;
}
return (hash);
}
