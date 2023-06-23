#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This function prints name using pointer to function
 * @name: name variable string to add
 * @f: f variable that points to function
 * Return: This returns nothing
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
