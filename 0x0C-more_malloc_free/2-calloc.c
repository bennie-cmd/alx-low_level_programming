#include <stdlib.h>
#include "main.h"

/**
 * *_memset - This fills mem with a const byte
 * @s: The mem area to be filled
 * @b: The b character to be copy
 * @n: The n num times to copy b
 * Return: Returns pointer to the mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * *_calloc - This allocates memory for an array
 * @nmemb: The num of elements in array
 * @size: The size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
