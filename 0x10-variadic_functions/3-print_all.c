#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_int - function prints an integer
* @ap: arguments to be printed
* Return: nothing
*/
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
* print_char - function prints an int
* @ap: argument to be printed
* Return: nothing
*/
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
* print_float - fucntion prints a float
* @ap: atgument to be printed
* Return: nothing
*/
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
* print_str - function prints a string
* @ap: argument to be printed
* Return: nothing
*/
void print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
* print_all - function prints any type
* @format: list of types of arguments passed to the functio
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";

	Type printType[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && *(format + i))
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == *(format + i))
			{
				printf("%s", separator);
				printType[j].func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
