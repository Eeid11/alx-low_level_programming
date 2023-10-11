#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print_alphabet function that prints 10 times the alphabet
 *
 * Return: 0 (success)
*/

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}
/*that prints 10 times the alphabet*/
void print_alphabet(void)
{
char x = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
x = 'a';
}
}
