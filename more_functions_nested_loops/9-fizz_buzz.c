#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by a new line.
 * for multiples of three print Fizz instead of a number
 * and for the multiples of five prints Buzz and for multiples of both
 * three and five print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	for (int i; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
