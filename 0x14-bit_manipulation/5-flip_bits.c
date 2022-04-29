#include "main.h"

/**
* flip_bits - function flips the bits to get from one number to another
* @n: The number to be flipped
* @m: The number of bits to be flipped
* Return: The number of bits to be flipped to get from one number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += xor & 1;
		xor >>= 1;
	}
	return (bits);
}
