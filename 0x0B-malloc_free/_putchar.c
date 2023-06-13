#include "main.h"
#include <unistd.h>
/**
 * _putchar - This is used to write character c to stdout
 * @c: c is used to write characters to print
 * Return: On success 1.
 * On err, -1 returned appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
