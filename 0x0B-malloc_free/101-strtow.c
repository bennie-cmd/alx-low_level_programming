#include <stdlib.h>
#include "main.h"

/**
 * count_word - Function that counts num of words in string
 * @s: S for the variable to be evaluated
 * Return: num of word as a result
 */
int count_word(char *s)
{
int flag, c, w;

flag = 0;
w = 0;

for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}

return (w);
}
/**
 * **strtow - This function is used to split string
 * @str: The variable str to split
 * Return: Returns the pointer to array strings or error
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

matrix[k] = NULL;

return (matrix);
}
