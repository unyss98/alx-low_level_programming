#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int b;
	float f;

	printf("Size of an char is: %zu byte(s)\n", sizeof(c));
	printf("Size of an int is: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(d));
	printf("Size of a long long int is: %lu byte(s)\n", sizeof(b));
	printf("Size of a float is: %zu byte(s)\n", sizeof(f));
	return (0);
}
