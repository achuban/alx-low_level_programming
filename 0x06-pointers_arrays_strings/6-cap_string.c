#include "main.h"
/**
* cap_string - string to toupper
*
* @c: c is char dest
* Return: uper string
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (isSeparator(c[i]) == 1 && c[i + 1] != '\0' && (c[i] >= 97 && c[i] <= 122))
			c[i + 1] -= 32;
	}
	return (c);
}
/**
* isSeparator - check if its a Separator
*
* @s: s is char
* Return: uper string
*/
int isSeparator(char s)
{
	int r;

	r = 0;
	switch (s)
	{
		case 9:
			r = 1;
		case 10:
			r = 1;
		case '':
			r = 1;
		case ',':
			r = 1;
		case ';':
			r = 1;
		case '.':
			r = 1;
		case '!':
			r = 1;
		case '?':
			r = 1;
		case '"':
			r = 1;
		case '(':
			r = 1;
		case ')':
			r = 1;
		case '{':
			r = 1;
		case '}':
			r = 1;
	}
	return (r);
}
