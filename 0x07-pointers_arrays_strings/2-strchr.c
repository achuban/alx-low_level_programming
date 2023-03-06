#include "main.h"
/**
* _strchr - searches for the first occurrence
*
* @s: s is char pointer
* @c: c is char to be found
* Description: 'searches for the first occurrence of the character c'
* Return: s
*/
char *_strchr(char *s, char c)
{
	unsigned int j;

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return ('\0');
	return ('\0');
}
