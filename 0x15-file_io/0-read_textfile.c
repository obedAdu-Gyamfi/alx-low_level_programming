#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * read_textfile - Entry point.
 * Description: This is a very function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: file to read from.
 * @letters: Number of letters to read.
 * Return: ssize_t.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp = open(filename, O_RDONLY);
	ssize_t n_read;
	ssize_t n_write;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	if (buff == NULL)
	{
		return (0);
	}
	n_read = read(STDIN_FILENO, buff, letters);
	n_write = write(STDOUT_FILENO, buff, n_read);
	
	if (fp == -1 || n_read == -1 || n_write == -1 || n_write != n_read)
	{
		free(buff);
		return (0);

	}
	free(buff);
	close(fp);
	return (n_write);
}
