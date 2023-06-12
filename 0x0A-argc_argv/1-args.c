#include <stdio.h>
#include "main.h"
/**
 * main - this prints the num of arguments pushed to the program
 * @argc: the num of args
 * @argv: the array of args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
