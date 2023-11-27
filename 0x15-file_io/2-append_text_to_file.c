#include "main.h"

/**
 * append_text_to_file - Appends text to the end of an existing file
 * @filename: The name of the file
 * @text_content: Text to append
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
