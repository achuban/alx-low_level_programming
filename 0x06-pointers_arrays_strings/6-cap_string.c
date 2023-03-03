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
		if (isSeparator(c[i]) == 1 && c[i + 1] != '\0' && (c[i + 1] >= 97 && c[i + 1] <= 122))
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
	switch (s)
	{
		case ' ':
			return (1);
		case '\t':
			return (1);
		case '\n':
			return (1);
		case ',':
			return (1);
		case ';':
			return (1);
		case '.':
			return (1);
		case '!':
			return (1);
		case '?':
			return (1);
		case '"':
			return (1);
		case '(':
			return (1);
		case ')':
			return (1);
		case '{':
			return (1);
		case '}':
			return (1);
	}
	return (0);
}
