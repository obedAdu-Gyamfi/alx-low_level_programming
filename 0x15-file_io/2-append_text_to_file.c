#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Entry point.
 * @s: string.
 * Return: int.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - Function appends text at the end of
 * a file.
 *
 * @filename: Name of file.
 * @text_content: String.
 * Return: int.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n_write, fp;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		i = _strlen(text_content);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	n_write = write(fp, text_content, i);

	if (fp == -1 || n_write == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
