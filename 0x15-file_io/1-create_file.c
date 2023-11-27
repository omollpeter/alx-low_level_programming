#include "main.h"

/**
 * create_file - Creates a text file writes text content to it
 * @filename: The name of the file to create
 * @text_content: Content to write to the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;
	FILE *fp;

	if (!filename)
		return (-1);

	fp = fopen(filename, "r");
	if (!fp)
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	else
		fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		fclose(fp);
		close(fd);
		return (1);
	}

	count = write(fd, text_content, strlen(text_content));
	if (count == -1)
		return (-1);

	fclose(fp);
	close(fd);
	return (1);
}
