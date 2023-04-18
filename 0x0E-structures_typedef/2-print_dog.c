#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 *
 * @d: struct tag
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL)
		printf("nil\n");
	else
	printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("nil\n");
	else
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("nil\n");
	else
	printf("Owner: %s\n", d->owner);
}
