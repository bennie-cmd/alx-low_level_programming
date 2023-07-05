#include "lists.h"

/**
 * print_listint -This function prints the elements of a linked list
 * @h: This variable linked list to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
