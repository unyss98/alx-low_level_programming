#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads text file and prints to stdout
 *
 * @filename: pointer to string
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t r, c;
	char *buffer;
	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	r = fread(buffer, sizeof(char), letters, fp);
	if (r == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	buffer[r] = '\0';
	c = fwrite(buffer, sizeof(char), r, stdout);
	if (c != r)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	free(buffer);
	fclose(fp);
	return (c);
}
