#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point 
 *
 * Description: positive or nigative
 *
 * Return: 0 (success)
<<<<<<< HEAD
=======
*
>>>>>>> c7822e5035ccbb232c32aae7050b8138d37a6e6f
*/
int main(void)
{
	int n;
<<<<<<< HEAD
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
=======

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x == 0)
		printf("%i is 0\n", n);
	else if (x > 0)
		printf("%i is positive\n", n);
	else 
		printf("\n", n);
	return (0);
}	
>>>>>>> c7822e5035ccbb232c32aae7050b8138d37a6e6f
