#include "lists.h"

/**
 * add_nodeint - add node at beginning of a list
 * @head: pointer
 * @n: data
 * Return: the address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listing_t *newnode = malloc(sizeof(listing_t));

	if (!head || newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (*head)
		newnode->next = *head;

	*head = newnode;
	return (newnode);

}
