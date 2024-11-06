#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to src, including the null byte
 * @dest: variable to be asign the copy
 * @src: variable to copy
 * Return: value copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
