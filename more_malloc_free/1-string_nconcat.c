#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first source string
 * @s2: second source string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the newly allocated memory with the concatenated string,
 * or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empt;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	empt = "";

	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;

	while (s1[len] != '\0')
		len++;

	size = (len + n) * sizeof(*nstr);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < size && s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < size && s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}

	nstr[i] = '\0';

	return (nstr);
}

