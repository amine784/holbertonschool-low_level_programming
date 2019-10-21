#ifndef HOLBERTON_H
#definie HOLBERTON_H
/**
 * struct dog my - cin dog
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
