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
unsigned long int index;
hash_node_t *node;
node = malloc(sizeof(hash_node_t));
if ((node == NULL) || (value == NULL) || ht == NULL)
{
return (0);
}
else if (key)
{
index = key_index((const unsigned char *)key, ht->size);
node->key = strdup(key);
node->value = strdup(value);
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
return (0);
}
