#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array and initializes it with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i;

	if (size == 0)
		return (NULL);

	\ac = malloc(size * sizeof(*ac));
	if (ac == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ac[i] = c;
	return (ac);
}
