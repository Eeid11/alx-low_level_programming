#include "main.h"
/**
 * _abs - function that combutes the absolute
 *		value  of an integer
 *
 * @n: takes in integer input for function
 *
 * Return: Always 0 (success)
 *
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
