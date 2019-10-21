#include "dog.h"
/**
*init_dog-function that initialize a variable of type struct dog
*@d:type struct dog.
*@name:name of dog.
*@age: age of dog.
*@owner:owner.
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == '\0')
{
return;
}
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
