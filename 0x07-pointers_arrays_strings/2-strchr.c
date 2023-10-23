#include "main.h"

/**
 * _strchr - fills memory
 *
 * @s: pointer
 * @c: conistant
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
<<<<<<< HEAD

	return ('\0');
=======
		return ('\0');
>>>>>>> 61a474bafe1e3700b419b27d022db2fa4f75f3da

	
}
