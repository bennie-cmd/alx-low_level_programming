#include "main.h"
/**
 * _strpbrk - The point code begins with the method
 * @s: The first input
 * @accept: The second input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}
