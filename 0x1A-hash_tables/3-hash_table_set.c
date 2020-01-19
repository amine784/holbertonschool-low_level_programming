#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* *hash_table_set-a function that adds an element to the hash table.
*@ht: hash table
*@key:key to add
*@value: value of key to add
* Return: Always succcesss
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i;
hash_node_t *node;
node = malloc(sizeof(hash_node_t));
if (!ht && !key && (value == NULL) && !node)
{
return (0);
}
else if (key)
{
i = key_index((const unsigned char *)key, (*ht).size);
(*node).value = strdup(value);
(*node).key = strdup(key);
(*node).next = (*ht).array[i];
(*ht).array[i] = node;
return (1);
}
return (0);
}
