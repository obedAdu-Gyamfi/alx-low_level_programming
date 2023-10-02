#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - This function reads a text file and prints
 * it to the standard output.
 * @filename: filename
 * @letters: The number of characters to read and print.
 * Return: bytes writen.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t n_read;
	ssize_t n_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	n_read = read(fd, buff, letters);
	n_write = write(STDOUT_FILENO, buff, n_read);

	if (fd == -1 || n_read == -1 || n_write == -1 || n_read != n_write)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);
	return (n_write);
}
