#include "main.h"
/**
 * _strncat - copies a number a specific time
 * @src: variable original
 * @dest: variable contenido de crear
 * *@n: number of variables specific to copy
 * Return: n
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
