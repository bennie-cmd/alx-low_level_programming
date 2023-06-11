#include "main.h"
/**
*_memcpy - is the function used to take mem area
*@dest: this is were memory is stored
*@src:  where memory is copied
*@n: num of bytes
*Return: this is the copied mem with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
