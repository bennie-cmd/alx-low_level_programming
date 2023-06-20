#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This function returns length of a string
 * @s: This is the variable of string to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * *_strcpy - This function copies string pointed by src
 * also the null byte (\0)
 * to buffer pointed by dest
 * @dest: This variable points buffer in which we copy the string
 * @src: This variable string is to be copied
 * Return: This returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - This fucntion creates a new dog struct
* @age: age of the dog
* @owner: owner of the dog
* @name: name of the dog
*Return: pointer to dog name (Success), else null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
