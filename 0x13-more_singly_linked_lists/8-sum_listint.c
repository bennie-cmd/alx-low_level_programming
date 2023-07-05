#include "lists.h"

/**
 * sum_listint - This function  calculates the sum of all listint_t
 * @head: This variable to the first node in the linked list
 * Return: The result is sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
