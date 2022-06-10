#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
* read_textfile - function reads a text file and prints it to the POSIX
* standard output
* @filename: The name of the file
* @letters: The number of letters it should read and print
* Return: Return 0 if file cannot be opened
* 0 if NULL
* 0 if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _open, _read, _write;
	char *file;

	if (filename == NULL)
		return (0);

	file = malloc(sizeof(char) * letters);

	if (file == NULL)
		return (0);
	_open = open(filename, O_RDONLY);
	if (_open == -1)
		return (0);
	_read = read(_open, file, letters);
	if (_read == -1)
	{
		free(file);
		return (0);
	}
	_write = write(STDOUT_FILENO, file, _read);

	if (_write == -1 || _write != _read)
	{
		free(file);
		return (0);
	}
	free(file);
	close(_open);

	return (_write);
}
