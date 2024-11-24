#include <stdio.h>

/**
 * main - prints the programs name
 *
 * @argc: Argument count (unused)
 * @argv: Argument vector (array of strings)
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc; /* suppress unused variable warning */
	printf("%s\n", argv[0]);
	return (0);
}
