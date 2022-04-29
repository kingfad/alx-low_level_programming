#include "main.h"

/**
* set_bit - function sets the value of a bit to 1 at a given index
* @n: pointer to the number
* @index: The index starting from 0
* Return: 1 if it worked or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n) - 1))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
