#include "dog.h"
#include <stdlib.h>

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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(0);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
