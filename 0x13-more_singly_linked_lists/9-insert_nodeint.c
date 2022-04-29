#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* insert_nodeint_at_index - function inserts a new node at a given position
* @head: head of the node
* @idx: index of the list where the new node should be added
* @n: element to be inserted
* Return: Address of the new node or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1, *temp2;
	unsigned int i;

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
	{
		free(temp1);
		return (NULL);
	}
	temp1->n = n;

	if (idx == 0)
	{
		temp1->next = *head;
		*head = temp1;
		return (temp1);
	}

	temp2 = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp2 == NULL || temp2->next == NULL)
			return (NULL);
		temp2 = temp2->next;
	}

	temp1->next = temp2->next;
	temp2->next = temp1;

	return (temp1);
}
