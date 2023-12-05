#include "main.h"

/**
 * create_file - create a new file.
 * @filename: pointer to the string to print.
 * @text_content: text to copy.
 *
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	char *buf;
	unsigned int len = 0;
	int r, w, fd;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}

	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_CREAT, O_RDWR, O_TRUNC, S_IWUSR);
	r = read(fd, buf, len);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);

	if (fd == -1 || r == -1 || w == -1)
	{
		return (0);
	}

	close(fd);

	return (1);
}
