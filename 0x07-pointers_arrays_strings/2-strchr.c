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

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
