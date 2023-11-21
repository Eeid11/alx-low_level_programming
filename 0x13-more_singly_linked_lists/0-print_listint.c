#include "lists.h"

/**
 * print_listint - the function return number of nude.
 * @h: the pointer of head list
 * Return: the number of nods.
 */

size_t print_listint(const listint_t *h)
{
	size_t c;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c)
}
