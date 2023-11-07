#include "main.h"
<<<<<<< HEAD

=======
#include <stdlib.h>
>>>>>>> e4187317f311071368f6cc48caddec0794d2afdf
/**
 * create_array - function that creates an array of char
 *
 * @size: size of array
 * @c: char
 *
 * Return: n
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
<<<<<<< HEAD
	while (size--)
		n[size] = c;
=======

	while (size--)
		n[size] = c;

>>>>>>> e4187317f311071368f6cc48caddec0794d2afdf
	return (n);
}
