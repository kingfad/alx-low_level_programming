#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - function sums all the data of linked list
* @head: head of the node
* Return: Returns the sum of all the data or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
