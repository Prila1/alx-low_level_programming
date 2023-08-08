#include "main.h"

/**
 * read_textfile - reads a text file and prints the numbers
 * @filename: filename.
 * @numbers: numbers of printed.
 *
 * Return: numbers of printed if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t numbers)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (numbers));
	if (!buf)
		return (0);

	nrd = read(fd, buf, numbers);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
