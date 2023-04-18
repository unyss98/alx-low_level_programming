#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct tag
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(1);

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
		exit(1);
	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
		exit(1);
	strcpy(d->owner, owner);

}
