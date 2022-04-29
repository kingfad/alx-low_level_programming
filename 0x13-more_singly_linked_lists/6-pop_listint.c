#include "lists.h"
#include "stdio.h"
#include "stdlib.h"

/**
* pop_listint - function deletes the head node of a linked list
* @head: head node of the list
* Return: The head node's data or 0 is list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = *head;

	if (temp == NULL)
		return (0);
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
