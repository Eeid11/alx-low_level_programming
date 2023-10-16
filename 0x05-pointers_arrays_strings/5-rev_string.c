#include "main.h"

/**
 * rev_string -  function that reverses a string
 *
 * @s: is the string
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	int temp;

	for (i = 0; s[i] != '\0', i++)
		;
	for (l = 0; l < i / 2; l++)
	{
		temp = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = temp;
	}
}
