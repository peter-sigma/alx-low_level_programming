#include<stdlib.h>
#include "dog.h"
/**
 * _strlen - A function to return the length of a string
 * @s: A string
 * Return: Length of a string
 */
int _strlen(char *s)
	{
		int i;


		i = 0;


		while (s[i] != '\0')
		{
			i++;
		}


		return (i);
	}

/**
 * _strcpy - A function to copy a string
 * @dest: destination of a string
 * @src: source of the string
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
	{
		int len, i;


		len = 0;


		while (src[len] != '\0')
		{
			len++;
		}


		for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';


		return (dest);
	}



/**
 * new_dog - A function that stores a copy of dog name and owner
 * @name: name of our dog
 * @age: Age of our dog
 * @owner: Name of dogs owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int dl, ol;

	dl = _strlen(name);
	ol = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (dl + 1));
	dog->owner = malloc(sizeof(char) * (ol + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
