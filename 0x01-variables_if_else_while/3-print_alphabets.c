#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: 0 (success)
*/


int main(void)
{
char x = 'a';
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
