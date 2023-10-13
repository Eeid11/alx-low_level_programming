#include <unistd.h>
#include "main.h"
/**
 * _putchar - write the caracter c to stdout
 * @c: the caracter to print
 *
 * Return: on success 1.
 *        on error -1 is return , an error is set
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
