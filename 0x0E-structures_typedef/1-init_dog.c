#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes variables in a struct
 * @d: name of struct
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

