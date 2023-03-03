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
		case 9:
			return (1);
		case 10:
			return (1);
		case 32:
			return (1);
		case 44:
			return (1);
		case 59:
			return (1);
		case 46:
			return (1);
		case 33:
			return (1);
		case 63:
			return (1);
		case 34:
			return (1);
		case 40:
			return (1);
		case 41:
			return (1);
		case 123:
			return (1);
		case 125:
			return (1);
	}
	return (0);
}
