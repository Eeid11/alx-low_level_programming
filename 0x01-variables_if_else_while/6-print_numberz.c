#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
int x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
putchar('\n');
return (0);
}
