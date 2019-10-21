#ifndef DOG_H
#define DOG_H
/**
 * struct dog - cin dog
 * @name: name
 * @age: age
 * @owner: id
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
