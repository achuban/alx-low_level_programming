#include "main.h"
/**
* _strspn -  returns the length of the initial substring of the string
*
* @s: s is a ponter to char dest
* @accept: accept is a char to fill
* Description: 'concatenates two string until n'
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int c;

	c = 0;
	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
