#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_nodeint_at_index - function returns the nth node of linked list
* @head: head node
* @index: index of the node , starting at 0
* Return: The nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
