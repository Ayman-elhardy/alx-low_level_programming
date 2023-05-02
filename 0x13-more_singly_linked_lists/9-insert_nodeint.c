#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node in
 * at the indexed linked list
 * @head: Is the pointer to the first node in the list
 * @idx: Is the index at which the new node is added
 * @n: Is the data that should be inserted in the new node
 *
 * Return: It returns the pointer to the new node, or NULL if it fails
 */
listint_t *insert_nedeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
				return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}


