#include "main.h"
/**
* set_string - function sets the value of a pointer to a char
* @s:pointer to a pointer whose to be assigned  a char
* @to: char to be assigned to s
*/
void set_string(char **s, char *to)
{
	*s = to;
}
