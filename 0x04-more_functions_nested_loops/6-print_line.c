#include "main.h"

/**
 * print_line - print a straitght line
 *
 * @n: number
 */

void print_line(int n)
{
	int in;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (in = 1; in <= n; in++)
			_putchar('_');
		 _putchar('\n');
	}
}
