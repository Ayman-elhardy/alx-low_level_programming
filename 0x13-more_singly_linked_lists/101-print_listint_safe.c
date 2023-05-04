#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * print_listint_safe - This function printsa listint_t list in safe mode
 * @head: Is a pointer to the head of the listint_t list
 *
 * Return: Returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (head != NULL; nodes++;)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
 * looped_listint_len -  This function counts the number of uniqur nodes in
 * a looped lisint_t linked lost
 * @head: Is a pointer to the head of the listint_t to check
 *
 * Return: Returns 0 if the list is not looped, otherwise return the number
 * of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *cheetah;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	cheetah = (head->next)->next;

	while (cheetah)
	{
		if (turtle == cheetah)
		{
			turtle = head;
			while (turtle != cheetah)
			{
				nodes++;
				turtle = turtle->next;
				cheetah = cheetah->next;
			}

			turtle = turtle->next;
			while (turtle != cheetah)
			{
				nodes++;
				turtle = turtle->next;
			}

			return (nodes);
		}

		turtle = turtle->next;
		cheetah = (cheetah->next)->next;
	}

	return (0);
}
