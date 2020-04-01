#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * append_text_to_file - creates a file with provided content
 * @filename: name of file
 * @text_content: provided content
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int c, r, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[c] != '\0')
		c++;

	r = write(fd, text_content, c);
	if (r == -1)
		return (-1);

	close(fd);

	return (1);
}
