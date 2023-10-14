#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('92');
		_putchar('\n');
	}
}
