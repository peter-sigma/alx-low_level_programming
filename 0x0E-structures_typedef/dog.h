#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H

#include <stdio.h>
/**
 * struct dog - structure dog
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: Who owns the  dog
 *
 * Description: more description goes here
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
