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
	int count;

	for (count = 0; *s != '\0'; *s++)
	{
		++count;
	}
	return (count);
}
