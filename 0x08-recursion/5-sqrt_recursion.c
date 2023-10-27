#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: hhhh
 * @val: jjjj
 *
 * Return: int
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 *
 * @n: hhhh
 * @val: jjjj
 *
 * Return: int
 */

int square(int n, int val)
{
	if (val * vsl == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
