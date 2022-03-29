/**
* _memset - function fills memory with a constant byte
*The _memset() function fills the first n bytes of memeory
* area pointed to by s with constant byte b
* @s: is the meory to be filled
* @b: is the constant byte that fills the memory
* @n: is the number of memory to be filled
* Return: function returns a pointer to the memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
