#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: source of character
 * @c: character to identify
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
