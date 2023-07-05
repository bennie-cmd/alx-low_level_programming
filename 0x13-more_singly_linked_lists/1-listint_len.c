#include "lists.h"

/**
 * listint_len - This function returns elements in a linked lists
 * @h: This variable n is a linked list to be traversed
 * Return: This returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
