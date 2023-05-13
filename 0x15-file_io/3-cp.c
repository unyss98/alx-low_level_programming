#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: pointer to argument string
 *
 * Return - 0 if success, 1 if not
 */

int main(int argc, char *argv[])
{
	int fdfrom, fdto, cl, cs, stat_outcome;
	char buffer[1024];
	ssize_t bytesRead, bytesWritten;
	struct stat stat_buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv
		[1]), exit(98);
	}
	bytesRead = read(fdfrom, buffer, sizeof(buffer));
	if (bytesRead < 0)
	{
		close(fdfrom);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv
		[1]), exit(98);
	}
	cl = close(fdfrom);
	if (cl != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdfrom);
		exit(100);
	}
	stat_outcome = stat(argv[2], &stat_buffer);
	if (stat_outcome == 0)
		fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, stat_buffer.st_mode & 0777);
	else
		fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	bytesWritten = write(fdto, buffer, bytesRead);
	if (bytesWritten < 0)
	{
		close(fdto);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cs = close(fdto);
	if (cs != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdto);
		exit(100);
	}
	return (0);
}
