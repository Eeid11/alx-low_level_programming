#include "lists.h"

/**
 * add_nodeint - add node at beginning of a list
 * @head: pointer
 * @n: data
 * Return: the address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);


	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (newnode);

}
