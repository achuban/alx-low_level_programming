#include "main.h"
/**
* cap_string - string to toupper
*
* @c: c is char dest
* Return: uper string
*/
char *cap_string(char *c);
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	}
	return (c);
}
/**
* isSeparator - check if its a Separator
*
* @c: c is char 
* Return: uper string
*/
int isSeparator(char s)
{
	int r;

	r = 0;
	switch (s)
	{
		case '':
			r = 1;
	}
	return (r);
}
