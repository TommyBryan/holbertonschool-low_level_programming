
#include "main.h"
/**
 * is_prime_helper - divides number
 *@n: number to check
 *@div: divisor to test
 *
 * Return: 0 if diversible, 1 otherwise.
 */
int is_prime_helper(int n, int div)
{
	if (div == 1)
		return (1); /* No divisor found, n is prime */
	if (n % div == 0)
		return (0); /* Found a divisor, n is not prime */
	return (is_prime_helper(n, div - 1)); /*check next divisor*/
}

/**
 * is_prime_number - checks if number is a prime number
 * @n: Number to check
 * Return: 1 if n is a prime number, if not return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Number less or equal to 1 are not Prime */
	return (is_prime_helper(n, n - 1)); /* Start checking divisors */
}


