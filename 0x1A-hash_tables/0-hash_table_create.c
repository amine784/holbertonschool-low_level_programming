#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *hash_table_create- a function that creates a hash table.
*@size: is the size of the array
* Return: Always success
**/
hash_table_t *hash_table_create(unsigned long int size)
{
if (size == 0)
{
return (NULL);
}
hash_table_t *hash_table;
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
return (NULL);
}
(*hash_table).size = size;
(*hash_table).array = malloc(sizeof(hash_node_t) * size);
if ((*hash_table).array == NULL)
{
free(hash_table);
return (NULL);
}
return (hash_table);
}
