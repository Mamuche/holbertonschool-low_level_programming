#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: pointer to the string to print.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it should read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1)
	{
		return (0);
	}

	free(buf);
	close(fd);
	return (w);
}
