#include "main.h"
/**
* _strspn - function gets the length of a prefix substring
* @s: the string to searched
* @accept: the string whose length of byte to be gotten
* Return: returns the number of bytes in the initial segement of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}
			else
				if (accept[index + 1] == '\0')
					return (byte);
		}
		s++;
	}
	return (byte);
}
