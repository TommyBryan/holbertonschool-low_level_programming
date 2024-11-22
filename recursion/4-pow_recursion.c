#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value ot be returned
 * @y: power of variable y
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return: (1);
	else if (y < 0)
		return: (-1);
	else
		return x * power(x, y - 1);
