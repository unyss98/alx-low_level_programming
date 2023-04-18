#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * dog_t *new_dog - creates a new dog
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t;
	struct dog_t *p;

	p = &dog_t;

	memcpy(dog_t->name, *name, strlen(name) + 1);

	dog_t->age = age;

	memcpy(dog_t->owner, owner, strlen(owner) + 1);

	return (p);
}
