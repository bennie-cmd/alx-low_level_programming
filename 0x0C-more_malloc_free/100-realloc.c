#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function to change location of mem block
 * @ptr: pointer to the mem found by malloc
 * @old_size: the variable for mem ptr
 * @new_size: the new_size variable new mem block
 * Return: returns pointer to newly mem block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));

ptr1 = malloc(new_size);
if (!ptr1)
return (NULL);

old_ptr = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
ptr1[i] = old_ptr[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = old_ptr[i];
}

free(ptr);
return (ptr1);
}
