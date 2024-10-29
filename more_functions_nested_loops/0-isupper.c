#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character.
 *
 * @c: value to be checked
 *
 * Return: c
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
