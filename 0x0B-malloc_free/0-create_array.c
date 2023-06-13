#include "main.h"
#include <stdlib.h>
/**
 * create_array - This is used to create array and  assign char c
 * @size: the parameter size is used to declare size
 * @c: C variable is used to assign a value
 * Return: the return value points to array, or NULL
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}

