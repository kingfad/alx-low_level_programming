#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - function returns the sum of all its parameters
* @n: number of parameters
* Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}