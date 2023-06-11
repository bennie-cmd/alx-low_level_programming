#include "main.h"
/**
 *_memset - for filling a block of mem with spvalue
 *@s: s for starting address of mem that is being filled
 *@b: d for the desired value
 *@n: n for num of bytes
 *Return: bring back a change of arry with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
