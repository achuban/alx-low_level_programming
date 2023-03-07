#include "main.h"
/**
* _strpbrk -  finds the first character in the string
*
* @s: s is a ponter to char dest
* @accept: accept is a ponter char to fill
* Description: 'finds the first character in the string'
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
