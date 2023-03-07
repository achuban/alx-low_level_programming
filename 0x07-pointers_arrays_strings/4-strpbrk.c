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
	unsigned int i;
	unsigned int j;
	int c;

	c = -1;
	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				if (c >= 0 && c > i)
					c = i;
		}
	}
	if (c >= 0)
		return (&s[i]);
	return ('\0');
}
