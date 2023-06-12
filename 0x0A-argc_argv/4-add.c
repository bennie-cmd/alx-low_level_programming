#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - the check of string
 * @str: arr str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
/*for declaring var*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*this counts str*/
{
if (!isdigit(str[count])) /*this checks if str are int*/
{
return (0);
}
count++;
}
return (1);
}
/**
 * main - the Entry to display name of the program
 * @argc: thsi Counts args typed by user
 * @argv: the Args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*first variables are declared*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*this checks the array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*atoi changes str to digit*/
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /* this prints the sum total*/
return (0);
}
