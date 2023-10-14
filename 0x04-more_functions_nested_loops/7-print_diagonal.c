#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n);
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	return;
	else
	{
		for (p = 0; p < n; p++)
		{
			for (s = 0; s < p; s++)
			{
				_putchar(' ');

			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
