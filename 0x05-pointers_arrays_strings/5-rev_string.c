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
	int c;
	char c;
	
	j = 0;
		
	for (i = 0; s[i] != '\0'; i++)
	{
	}


	c = i / 2 + 1
	for (j = 0; j < c; j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
	}
}
