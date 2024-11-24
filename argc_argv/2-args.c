#include <stdio.h>
/**
 * main - Prints all arguments received, including the program name
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
