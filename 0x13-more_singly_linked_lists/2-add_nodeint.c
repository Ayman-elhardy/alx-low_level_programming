#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the beginning of a
 * linked list
 * @n: Is the data to insert in the new node
 *
 * Return: Pointer to a new node, or NULL if it fails
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
