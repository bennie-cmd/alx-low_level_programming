#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function writes the character c to stdout
 * @c: The variable character to be print
 * Return: The return On success 1.
 * else return error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
