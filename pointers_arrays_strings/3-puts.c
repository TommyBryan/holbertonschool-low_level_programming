#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: s
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
		_puts(str[i]);
	_puts('\n');
}
