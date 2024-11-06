#include "main.h"
/**
 * puts_half - writes half of the string, followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
	int length_of_the_string;
	int length;
	int n;
	int i;

	length_of_the_string = 0;
	for (length = 0; str[length] != '\0'; length++)
	{
		length_of_the_string = length + 1;
	}
	n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i < length_of_the_string; i++)
	_putchar(str[i]);
	_putchar('\n');
}
