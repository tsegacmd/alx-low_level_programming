#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a list_t list.
 * @head: Pointer to the actual position of the linked list (struct)
 * @n: Value to include in the new node
 *
 * Return: Pointer to the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;
	int val = n;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = val;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (*head);
}
