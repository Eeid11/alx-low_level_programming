#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point 
 *
 * Description: positive or nigative
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x == 0)
		printf("%i is zero\n", n);
	else if (x > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
