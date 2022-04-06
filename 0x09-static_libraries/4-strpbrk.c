#include "main.h"
/**
* _strpbrk - function searches a string for any of a set of bytes
* @s: string to be searched
* @accept: string whose bytes we search
* Return: function returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
