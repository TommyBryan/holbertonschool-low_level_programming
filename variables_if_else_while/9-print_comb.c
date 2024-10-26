#include <stdio.h>
/**
 * main - Program that prints all combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(number);
	}
	putchar('\n');

	return (0);
}
