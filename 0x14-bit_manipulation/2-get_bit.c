
#include "main.h"

/**
* get_bit - function returns the value of a bit at a given index
* @n: The number whose value is to be gotten
* @index: The index of the number
* Return: The value of the bit at index or -1 if error occurs
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
