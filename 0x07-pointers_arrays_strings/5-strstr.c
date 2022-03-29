#include "main.h"
/**
* _strstr - function locates a substring in a string
* @haystack: The string to be searched through
* @needle: The sunstring to be located
* Return: function returns a pointer to the beginning
* of the located substring or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				h++;
				n++;
			}
			else
			{
				break;
			}
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
