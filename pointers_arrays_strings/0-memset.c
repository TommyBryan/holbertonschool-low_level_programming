#include "main.h"
/**
 * _memset - funcion
 * @s: pointed to
 * @b: constant byte
 * @n: number of times
 * Return: pointer
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
