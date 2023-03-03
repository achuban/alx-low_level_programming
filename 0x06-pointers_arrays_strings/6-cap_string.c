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
	int r;

	r = 0;
	switch (s)
	{
		case 9:
			r = 1;
		case 10:
			r = 1;
		case 32:
			r = 1;
		case 44:
			r = 1;
		case 59:
			r = 1;
		case 46:
			r = 1;
		case 33:
			r = 1;
		case 63:
			r = 1;
		case 34:
			r = 1;
		case 40:
			r = 1;
		case 41:
			r = 1;
		case 123:
			r = 1;
		case 125:
			r = 1;
	}
	return (r);
}
