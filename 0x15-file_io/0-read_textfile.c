#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * youtask.c -
 *
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int c, fd, ret;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	c = read(fd, buf, letters);
	ret = write(1, buf, c);
	free(buf);

	if (c == -1 || ret == -1)
		return (0);

	close(fd);

	return (c);	
}
