#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list
 * @head: The variable head to point to the first list node
 * Return: Returns node to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
