#include "main.h"

/**
 * main - main block
 *
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 *		Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
		printf("%d\n", sum);
	}

	return (0);
}
