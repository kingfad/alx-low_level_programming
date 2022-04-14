#include <stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"
#include<stdarg.h>
/**
* print_strings -function prints a string
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
* Return: returns nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
