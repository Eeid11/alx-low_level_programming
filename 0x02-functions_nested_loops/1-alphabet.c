
#include <stdio.h>
/**
 *
 * print_alphabet - utilaization on the _putchar function to print alpabet 
*/

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
