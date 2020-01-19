#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* hash_table_print-a function that prints a hash table.
*@ht: hash table
* Return: Always succcesss
**/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
char *spec = "";
hash_node_t *p_node;
if (ht == NULL  || (*ht).array == NULL)
{
printf("{}\n");
return;
}
if (ht != NULL)
{
printf("{");
for (i = 0; i < (*ht).size; i++)
{
p_node = (*ht).array[i];
if (p_node != NULL)
{
printf("%s'%s': '%s'", spec, (*p_node).key, (*p_node).value);
p_node = (*p_node).next;
spec = ", ";
}
}
printf("}\n");
}
}
