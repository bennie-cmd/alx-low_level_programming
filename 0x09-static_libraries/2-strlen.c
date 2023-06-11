#include "main.h"
/**
* _strlen - this function returns string length
* @s: the string
* Return: the actual length
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}

