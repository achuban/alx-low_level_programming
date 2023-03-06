#include "main.h"
/**
* _strchr - searches for the first occurrence
*
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
	return ('\0');
}
