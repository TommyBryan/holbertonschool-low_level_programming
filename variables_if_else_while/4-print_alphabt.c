#include <stdio.h>
/**
 * main - prints the alphabet in lowercase excluding 'q' and 'e'.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		if (letter != 'q' && letter != 'e')
		putchar('\n');
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
