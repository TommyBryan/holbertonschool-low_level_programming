#include <stdio.h>
#include "main.h"
/**
 * print_sign - place symbol + o_ of number
 *
 * @n: variable to be compared
 *
 * Return: 1 if is a letter or 0 if is a character
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
