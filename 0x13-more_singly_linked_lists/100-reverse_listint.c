#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* reverse_listint - function reverses a linked list
* @head: head of the linked list
* Return: A pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
