#include "main.h"

/**
 * _memset _ fille memory
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

	for (i  = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}	
