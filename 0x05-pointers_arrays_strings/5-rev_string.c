#include "main.h"
/**
* rev_string - reverse string
*
* @s: s is a ponter to sting
* Description: 'reverse string'
*/

void rev_string(char *s)
{
	int i;
	int j;
	char c;
	
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		i--;
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
