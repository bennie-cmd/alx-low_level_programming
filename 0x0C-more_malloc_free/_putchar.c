#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function writes char c to stdout
 * @c: The C char to be printed
 * Return: For success 1.
 * -1 errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
