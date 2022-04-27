#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - function adds anew node at the beginning of a linked list
* @head: head of the node
* @n: elememnt to be added
* Return: Address of the new element added or NULL otherwise
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
