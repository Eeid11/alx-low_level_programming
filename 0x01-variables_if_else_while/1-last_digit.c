#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: zero or greater than 5 or less than 6 and not 0: the string
 *
 * Return: 0 (success)
*/


int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int x = n % 10;
if (x > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, x);
else if (x == 0)
printf("Last digit of %i is 0 and is 0,n\n", n);
else if (x < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
return (0);
}
