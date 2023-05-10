#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text to file
 *
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		j = write(fd, text_content, i);
		if (j < 0)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
