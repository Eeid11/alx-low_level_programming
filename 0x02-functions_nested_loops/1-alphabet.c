
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
}
