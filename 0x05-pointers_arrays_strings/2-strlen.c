#include "main.h"

/**
 *_strlen - returns the length of a string.
 *
 * @s: as input
 *
 *Return: *returns the length of a string
*/

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
	{
		++x;
	}
	return (x);
}
