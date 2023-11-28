#include "main.h"

/**
 * read_textfile - Entry point
 * Description: This is a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: This is a pointer to the path or file
 * to read from.
 * @letters: This is the number of letters it should read and
 * print.
 * Return: Number of bytes read.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_read, n_write;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		return (0);
	}
	n_write = write(STDOUT_FILENO, buf, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (n_write);
}
