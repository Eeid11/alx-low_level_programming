#include "dog.h"

/**
 * init_dog - initializes the dog
 * @d: the dog
 * @name: dog's name3
 * @age: dog age
 * @owner: owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
