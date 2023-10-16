# include "main.h"

/**
 * swap_int - swap two integr
 *
 * @a: first int
 * @b: secande int
 *
 * Return: nothinge
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
