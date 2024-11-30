#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers.
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 *
 * Return: pointer to the newly created array, or NULL if allocation fails
 * or if min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int counter;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	counter = 0;
	while (min <= max)
	{
		ptr[counter] = min;
		min++;
		counter++;
	}

	return (ptr);
}

