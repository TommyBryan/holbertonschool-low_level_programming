#include "main.h"
/**
 * puts2 - prints 0 and every par number
 *
 * @str: number pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
