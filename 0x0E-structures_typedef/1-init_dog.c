#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function to initialize dog
 * @d: dog to initialize
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(d));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
