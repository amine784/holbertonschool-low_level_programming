#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* hash_table_delete-a function that deletea hash table.
*@ht: hash table
* Return: Always succcesss
**/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
if ((ht == NULL) || ((*ht).array == 0))
{
free(ht);
return;
}
else
{
for (i = 0; i < (*ht).size; i++)
{
if ((*ht).array[i] != NULL)
{
node = ((*ht).array[i]->next);
free((*ht).array[i]->key);
free((*ht).array[i]->value);
free((*ht).array[i]);
(*ht).array[i] = node;
}
}
}
free((*ht).array);
free(ht);
}
