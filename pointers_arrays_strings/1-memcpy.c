#include "main"
/**
 * _memcpy - copies memory area
 * @dest: address to be copied
 * @src:
 * @n:
 * Return: nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
