#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - cp file argv1 to argv2
 * @argc: arg count
 * @argv: arg values
 * Return: 97, 98, 99, 100 on failure, 0 on success
 */
int main(int argc, char **argv)
{
	int s, t, r;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	s = open(argv[1], O_RDONLY);
	if (s == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);

	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (t == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(s, buf, 1024)))
	{
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
		if ((write(t, buf, r)) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(s) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s), exit(100);
	if (close(t) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t), exit(100);

	return (0);
}
