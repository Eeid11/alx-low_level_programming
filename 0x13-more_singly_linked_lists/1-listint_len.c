#include "lists.h"

/**
 * listint_len - the function return number of nude.
 * @h: the pointer of head list
 * Return: the number of nods.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{

		h = h->next;
		i++;
	}

	return (i);
}
