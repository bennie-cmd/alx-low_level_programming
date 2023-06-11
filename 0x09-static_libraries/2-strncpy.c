#include "main.h"
/**
* _strncpy - fucntion that copies a string
* @dest: first input value
* @src: second input value
* @n: the third input value
* Return: returns the dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}

