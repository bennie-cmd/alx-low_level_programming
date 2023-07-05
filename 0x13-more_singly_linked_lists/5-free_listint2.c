#include "lists.h"

/**
 * free_listint2 - This function helps to empty a linked list
 * @head:This variable pointer to listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
