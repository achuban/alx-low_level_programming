#include "main.h"
/**
* string_toupper - string to toupper
*
* @c: c is char dest
* Return: uper char
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	}
	return (c);
}