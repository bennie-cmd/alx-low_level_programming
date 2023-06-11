#include "main.h"
/**
* _strncat - this helps concatenate two strings
* uses n bytes code
* @dest: this helps input values
* @src: this helps to input value
* @n: this inputs value
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
