#include "lists.h"
#include<stdlib.h>
#include <stdio.h>

/**
* free_listint2 - function frees a list and sets head to NULL
* @head: head node
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
