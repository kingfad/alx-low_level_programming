#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_nodeint_end - function adds a new node at the end of a list
* @head: The head of the node
* @n: element to be added
* Return: The address of the new element or NULL otherwise
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head)
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (*head);
}
