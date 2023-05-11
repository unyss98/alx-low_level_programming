#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * create_file - create a file
 *
 * @filename: name of file
 * @text_content: text to be written to the file
 *
 * Return: 1 on success, -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		i = write(fd, text_content, strlen(text_content));
		if (i < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
