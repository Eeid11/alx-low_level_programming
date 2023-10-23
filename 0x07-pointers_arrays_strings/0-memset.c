#include "main.h"

/**
 * _memset - fille memory by input
 *
 * @s: pointer
 * @b: conistante
 * @n: max bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i  = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

