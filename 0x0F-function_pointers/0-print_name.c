#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: a pointer to string
 * @f: a pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
