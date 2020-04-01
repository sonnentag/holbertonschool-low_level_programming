#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - creates a file with provided content
 * @filename: name of file
 * @text_content: provided content
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c = 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		exit(-1);

	while (text_content[c] != '\0')
		c++;

	write(fd, text_content, c);
	close(fd);

	return (1);
}
