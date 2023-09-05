#include <stdio.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * _strlen - Entry point.
 * @s: string.
 * Return: int.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - This function creates a file.
 * @filename: name of the file
 * @text_content: Content of text.
 * Return: int.
 */

int create_file(const char *filename, char *text_content)
{
	int n_write, fp;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		i = _strlen(text_content);
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0600);
	n_write = write(fp, text_content, i);

	if (fp == -1 || n_write == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}

