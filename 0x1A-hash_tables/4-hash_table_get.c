#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* *hash_table_get-a function that retrieves a value associated with a key
*@ht: hash table
*@key:key to add
* Return: Always succcesss
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *p_node;
unsigned long int i;
if ((ht == NULL) || (key == NULL))
{
return (NULL);
}
else if (key != NULL)
{
i = key_index((const unsigned char *)key, (*ht).size);
if ((*ht).array[i] != NULL)
{
p_node = (*ht).array[i];
if (p_node != NULL)
{
if (strcmp((*p_node).key, (char *)key) == 0)
return ((*p_node).value);
else
p_node = (*p_node).next;
}
}
}
return (NULL);
}
