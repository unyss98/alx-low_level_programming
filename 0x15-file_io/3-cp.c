#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: pointer to argument string
 *
 * Return - 0 if success, 1 if not
 */

int manin(int argc, char *argv[])
{
	int fdfrom, ch;
	size_t count;
	char *buffer, ;
	ssize_t bytesRead;
	FILE *file_from = &argv[1];

	if (argc ! = 3)
	{
		fputs("Usage: cp file_from file_to\n", stderr);
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fdfrom == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((ch = fgetc(file_from)) != EOF)
		count++;
	buffer = malloc(sizeof(char) * count + 1);
	bytesRead = read(fd, buffer, count);
	if (buffer == NULL || bytesRead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 664);
	if (fd < 0)
	{
		dprintf(STSERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(
	bytesRead = read(fd, 
