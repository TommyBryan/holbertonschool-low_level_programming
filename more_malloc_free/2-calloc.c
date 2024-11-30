#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strArray;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	strArray = malloc(nmemb * size);
	if (strArray == NULL)
		return (NULL);

	counter = 0;
	while (counter < (nmemb * size))
	{
		strArray[counter] = 0;
		counter++;
	}

	return (strArray);
}

