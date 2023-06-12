#include <stdio.h>
#include "main.h"
/**
 * main - This prints args received
 * @argc: The num of arguments
 * @argv: This passes array of arguments
 * Return: this Always 0 when(Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
