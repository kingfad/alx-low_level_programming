#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - function deletes the node at index of linked list
* @head: head of the node
* @index: The index of the node that should be deleted starting from 0
* Return: Returns 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = *head;
	listint_t *temp2;
	unsigned int node;

	if (temp1 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (temp1->next == NULL)
			return (-1);
		temp1 = temp1->next;
	}

	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);

	return (1);

}
