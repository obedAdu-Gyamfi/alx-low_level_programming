#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * word_count: Determines the number of words in
 * a string
 * @s: The string to evaluate
 * Return: int
 */

int word_count(char *s)
{
	int flag = 0;
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);

}

/**
 * strtow - Entry point.
 *
 * Description: This function splits a string
 * into two words and returns a pointer
 * to an array of strings (words).
 *
 * @str: string
 *
 * Return: str
 *
 */

char **strtow(char *str)
{
	char **ptr, *tmp;
	int i;
	int k = 0;
	int len = 0;
	int wrds, c = 0;
	int begin;
	int end;

	while (*(str + len))
	{
		len++;
	}
	wrds = word_count(str);
	if (wrds == 0)
	{
		return (NULL);
	}
	ptr = (char **)malloc(sizeof(char **) * (wrds + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (begin < end)
				{
					*tmp++ = str[begin++];
				}
				*tmp = '\0';
				ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			begin = i;
		}
	}
	ptr[k] = NULL;
	return (ptr);
}

