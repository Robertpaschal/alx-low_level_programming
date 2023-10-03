#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
/**
 * create_file - creates file with specided permissions
 * @filename: the file accessed
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, strlen(text_content));

		if (bytesWritten == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
