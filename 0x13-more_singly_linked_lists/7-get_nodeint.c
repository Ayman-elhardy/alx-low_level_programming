#include "lists.h"

/**
 * get_nodeint_at_index - This function allows to return the node
 * at a certain index in a linked list
 * @head: Is the first node in the linked list
 * @index: is the Index of the node that should be returned
 *
 * Return: return a pointer to the node, or NULL if it fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
