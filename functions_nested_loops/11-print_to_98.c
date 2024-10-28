#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers until 98, foloowed by a new line.
 *
 * @n: stores value of n
 * Return: 0
 */
void print_to_98(int n);
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
