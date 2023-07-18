#ifndef DOG_H
#define DOG_H

/**
 * struct dog  - Defines a new type
 * @name: Name of specimen
 * @age: Age of specimen
 * @owner: The owner's  name
 *
 *
 * Description: This struct  program creates
 * a type dog that hold into some values that
 * can be accessed when needed
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
