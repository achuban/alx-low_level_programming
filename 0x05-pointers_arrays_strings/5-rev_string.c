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
	
	j = 0;
	c = s[0];
	
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i / 2; j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
	}
}
