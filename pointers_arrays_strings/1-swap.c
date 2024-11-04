#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 *
 * @a: holds a value
 * @b: holds a value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
