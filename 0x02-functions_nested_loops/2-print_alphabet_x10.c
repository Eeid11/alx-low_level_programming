#include "main.h"
/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *                      the alphabet a - z
*/
void print_alphabet_x10(void)
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
