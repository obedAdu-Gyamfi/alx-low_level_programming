#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - Entry point.
 *
 * Description: Function concatenates two strings.
 * The returned pointer pointes to a newly located space in
 * memory, which contains s1, followed by the first n bytes
 * of s2, and null terminated.
 *
 * If the function fails, it returns null.
 * If n is greater or equal to the length of s2, then the
 * function uses the entire string s2.
 * If NULL is passed, the function treates it as an empty
 * string.
 *
 * @s1: This is the first string to  concatenate.
 * @s2: Second string.
 * @n: a positive integer bytes.
 *
 * Return: Void
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i,j;
	char *ptr;
	unsigned int len = strlen(s1) + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	ptr = malloc(n * sizeof(s1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (i = len ; i < n*sizeof(s1) && s2[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
		/*s1[len + i] = s2[i];*/
	}
	for (j = 0;s2[j]; j++)
	{
		ptr[i + j] = s2[j];
	}
	
	ptr[len] = '\0';
	return (ptr);
}
