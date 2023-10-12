#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the sum of even-valed
 *		fibonacci sequence not exceed
 *
 * return: 0
*/

int main(void)
{
	unsigned long x = 0, y = 1, sum;
	float total;

	while (1)
	{
		sum = x + y;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		x = y;
		y = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
