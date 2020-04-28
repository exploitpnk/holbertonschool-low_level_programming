#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init
 * @d: ptr
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: 1
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
