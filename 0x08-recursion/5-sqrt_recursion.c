#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - Recursively calculates the natural square root
 * of a number.
 * @n: The number to calculate the square root of.
 * @i: The current iterator.
 *
 * Return: The resulting square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
	return (actual_sqrt_recursion(n, i + 1));
}
