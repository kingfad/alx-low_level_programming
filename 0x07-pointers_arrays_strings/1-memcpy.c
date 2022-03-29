/**
* _memcpy - function copies memory area
* The _memcpy() function copies n bytes from memory area src
* to memory area dest
* @dest: meomory area to be copied into
* @src: address to be copied
* @n: size of memory to be copied
* Return: returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
