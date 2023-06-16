#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - Func identifies and places memory using malloc
 * @b: The variable b is a num bytes to allocate
 *
 * Return: A pointer is returned allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
