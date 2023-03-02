#include "main.h"
/**
* string_toupper - string to toupper
*
* @c: c is char dest
* Return: uper char
*/
char *string_toupper(char c)
{
	if(c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
