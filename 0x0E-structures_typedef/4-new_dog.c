#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*new_dog-function that creates a new dog
*@name:name of dog.
*@age: age of dog.
*@owner:owner.
*Return: always success.
**/
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, k;
dog_t *new = malloc(sizeof(dog_t));
for (j = 0; name[j]; j++)
;
for (k = 0; owner[k]; k++)
;
if (new == NULL)
return (NULL);
(*new).name = malloc(sizeof(char) * (j + 1));
if ((*new).name == NULL)
{
free(new);
return (NULL);
}
(*new).owner = malloc(sizeof(char) * (k + 1));
if ((*new).owner == NULL)
{
free((*new).name);
free(new);
return (NULL);
}
for (i = 0; i <= j; i++)
(*new).name[i] = name[i];
(*new).age = age;
for (i = 0; i <= k; i++)
(*new).owner[i] = owner[i];
return (new);
}
