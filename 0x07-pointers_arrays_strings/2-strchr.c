#include "main.h"
/**
* _strchr - function locates a character in a string
* @s: string to be searched
* @c: string to be located
* Return: returns a pointer to the first occurrence of the character
* c in the string or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	return ('\0');
}
