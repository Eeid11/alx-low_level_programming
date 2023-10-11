
#include <stdio.h>
/**
 * print_alphabet - utilizes on the _putchar function to print
 *			the alphabet a - z
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
