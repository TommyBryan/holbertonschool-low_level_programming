#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Returns 1 if lower or upper case
 *
 *@c: variable to be compared
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	return (0);
}
