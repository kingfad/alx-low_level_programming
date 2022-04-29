#include "main.h"

/**
* clear_bit - function sets then value of a bit to 0 at a given index
* @n: Pointer to the number
* @index: The index starting from 0 of the bit you want to set
* Return: 1 if successful or -1 if error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
