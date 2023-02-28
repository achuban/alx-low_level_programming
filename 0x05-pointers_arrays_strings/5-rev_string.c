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
	for (i = i - 1; i >= i / 2; i--)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		j++;
	}
}
