#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks if memory allocation was successful
 * @b: amount of memory to allocate
 *
 * Return: pointer to the allocated memory or exit with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}

