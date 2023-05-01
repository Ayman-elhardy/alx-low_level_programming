#include <lists.h>

/**
 * listint_len - It returns the number of elements in a linked list
 * @h: Is the linked list of type listint_t to traverse
 *
 * Return: Is the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
