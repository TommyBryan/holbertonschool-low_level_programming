#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: word to change the order
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	while (i > 0)
	{
		--i;
		_putchar(s[i]);
	}
	_putchar('\n');
}
