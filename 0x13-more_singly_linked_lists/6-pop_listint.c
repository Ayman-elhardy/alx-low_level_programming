#include "lists.h"

/**
 * pop_listint - This function serves to deletes the head node of
 * a linked list
 * @head: Is a pointer to the first element in the linked list
 *
 * Return: It returns the data inside the elements that were deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
