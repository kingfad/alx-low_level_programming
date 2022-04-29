#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint - function converts a binary number to an unsigned int
* @b: a pointer to a string of 0 and 1 chars
* Return: The converted number or 0 if:
*	there is one or more chars in the string b that is not 0 or 1
*	b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int i;

	binary = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i]; i++)
	{
		binary <<= 1;
		if (b[i] == '1')
			binary += 1;
	}
	return (binary);
}
