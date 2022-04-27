#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* listint_len - function returns the number of elements in a linked list
* @h: head node
* Return: Returns node count
*/

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
