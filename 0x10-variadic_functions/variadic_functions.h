#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_int(va_list ap);
void print_float(va_list ap);
void print_char(va_list ap);
void print_str(va_list ap);
/**
* struct printAnything - structure definition of a printAnything struct
* @type: type
* @func: function to print
*/
typedef struct Type
{
	char *type;
	void (*func)(va_list);
} Type;

#endif
