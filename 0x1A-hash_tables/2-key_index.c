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
unsigned long int hash = 0;

if (key == NULL)
exit(1);
if (size == 0)
exit(1);
hash = hash_djb2(key) % size;
return (hash);
}
