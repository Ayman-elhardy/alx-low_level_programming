#include "lists.h"

/**
 * sum_listint - Is a function that calculates the sum of
 * all the data in a listint_t list
 * @head: Is the first node in the linked list
 *
 * Return: It returns the resulting sum
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
