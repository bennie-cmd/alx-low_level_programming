#include "main.h"
/**
* char *_strcpy - the function cps string given to by src
* @dest: the variable to copy to
* @src: the variable to copy from
* Return: value string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for (; x < l; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
