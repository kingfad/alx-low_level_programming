#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
* alloc - function allocates memory
* @filename: the name of the file to be reserved a memory space for
* Return: Pointer to the newly allocated memory
*/

char *alloc(char *filename)
{
	char *mem;

	mem = malloc(sizeof(char) * 1024);
	if (mem == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (mem);
}

/**
* _close - function closes a file
* @d: The file descriptor
* Return: Nothing
*/

void _close(int d)
{
	int cl = close(d);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
* main - function copies the contents of a file to another
* @argc: Number of arguments passed to the program
* @argv: Array of pointers to the arguments
* Return: 0 on success
* Description: exit code 97 if the argument count is incorrect
*		exit code 98 if the file_from does not exist or cannot be read
*		exit code 99 if the file_to cannot be created or written to
*		exit code 100 if file_to or file_from cannnot be closed
*/

int main(int argc, char *argv[])
{
	int open_from, open_to, rd, wr;
	char *mem;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	mem = alloc(argv[2]);
	open_from = open(argv[1], O_RDONLY);
	rd = read(open_from, mem, 1024);
	open_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (open_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(mem);
			exit(98);
		}
		wr = write(open_to, mem, rd);
		if (open_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(mem);
			exit(99);
		}
		rd = read(open_from, mem, 1024);
		open_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(mem);
	_close(open_from);
	_close(open_to);
	return (0);
}
