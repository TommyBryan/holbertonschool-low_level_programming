#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
    return (_sqrt(n, 1));
}

/**
 * _sqrt - Helper function to calculate the natural square root
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root, or -1 if it doesn't exist
 */
int _sqrt(int n, int i)
{
    int sqrt = i * i;

    if (sqrt > n)
        return (-1);
    if (sqrt == n)
        return (i);

    return (_sqrt(n, i + 1));
}
