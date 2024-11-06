#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of intergers
 *
 * @a: Array of intergers
 * @n: Numbers of elements to print
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", a[i]);
	}
		if (i == (n - 1))
			printf("%d", a[i]);
printf("\n");
}
