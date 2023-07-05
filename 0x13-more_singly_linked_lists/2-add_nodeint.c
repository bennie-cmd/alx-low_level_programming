#include "lists.h"

/**
 * add_nodeint - This function adds a new node at beginning of linked-1
 * @head: The variable head is a to be linked
 * @n: The varible n inserts data new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
