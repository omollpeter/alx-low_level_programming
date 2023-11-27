#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Filename
 * @letters: Number of characters to print
 *
 * Return: Number of characters printed, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	char *buffer;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	count = read(fd, buffer, letters);
	if (count == -1)
		return (0);

	write(STDOUT_FILENO, buffer, count);

	free(buffer);
	close(fd);
	return (count);
}
