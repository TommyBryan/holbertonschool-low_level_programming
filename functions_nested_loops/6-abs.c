#include <stdio.h>
#include "main.h"
/**
 * _abs - calculate absolute value
 *
 * @n: number to be calculated
 *
 * Return: returns absolute value
 */
int _abs(int n)
{
	int abs_value;

	if (n < 0)
	{
		abs_value = n * -1;
		return (abs_value);
	}
	return (n);
}
