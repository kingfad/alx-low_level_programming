#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
* create_file - function creates a file
* @filename: file to be created
* @text_content: is a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure, -1 if filename is NULL
*/
int create_file(const char *filename, char *text_content)
{
	int op, wr, index = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (index = 0; text_content[index] != '\0'; index++)
			;

		wr = write(op, text_content, index);
		if (wr == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(op);

	return (1);
}
