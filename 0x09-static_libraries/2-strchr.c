#include "main.h"
/**
* _strchr - Where the code begins
* @s: the input
* @c: the second input
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
