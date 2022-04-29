#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - function frees a linked list
* @head: head node
* Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
