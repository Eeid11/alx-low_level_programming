#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - eeeeeee
 *
 * @othrn: fffff
 * @n: int 
 *
 * Return: 0 or 1
 */

int check_prime (int n, int othrn);
int is_prime_number (int n)
{
	return (check_prime (n, 2));
}

/**
 * check_prim - eeeeeee
 *
 * @othrn: fffff
 * @n: int
 *
 * Return: 0 or 1
 */

int check_prime (int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if 