#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the variable is a lowercase character.
 *@c: checks if c is lowercase
 * Return: Always 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
