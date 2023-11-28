#include "main.h"

/**
 * main - Checks code
 * @argc: Number of program parameters
 * @argv: Array of program paramters
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, cfd1, cfd2, result;
	FILE *fp;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp = fopen(argv[2], "r");
	if (!fp)
		fd2 = open(argv[2], O_WRONLY | O_CREAT, 0664);
	else
		fd2 = open(argv[2], O_WRONLY | O_TRUNC);

	result = copy_file(fd1, fd2);
	if (result == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fp)
		fclose(fp);
	cfd1 = close(fd1);
	if (cfd1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	cfd2 = close(fd2);
	if (cfd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

/**
 * copy_file - Copies content of a file to another file
 * @fd1: reference to file to copy from
 * @fd2: reference to file to copy to
 *
 * Return: 1 on succcess, -1 othersise
 */
int copy_file(int fd1, int fd2)
{
	char buffer[1024];
	ssize_t nb_read = -1, nb_written;

	while (nb_read != 0)
	{
		nb_read = read(fd1, buffer, 1024);
		if (nb_read == -1)
			return (-1);
		nb_written = write(fd2, buffer, nb_read);
		if (nb_written == -1)
			return (-1);
	}

	return (1);
}
