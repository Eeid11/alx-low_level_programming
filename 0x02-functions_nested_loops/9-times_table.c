#include "main.h"

/**
 * times_table - print the 9 time table
 *
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (nom = 0; nom <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9 ; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}

}
