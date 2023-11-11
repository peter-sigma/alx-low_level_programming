#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A function that frees dog
 * @d: a dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
