#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - function prints numbers, followed bt a newline
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
* Return: returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%i", num);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
