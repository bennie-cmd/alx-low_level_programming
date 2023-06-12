#include <stdio.h>
#include "main.h"
/**
 * _putchar - This is used to write character display stdout
 * @c:The characters printed
 * Return: If success 1.
 * Error, -1 is returned an errno is returned appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
