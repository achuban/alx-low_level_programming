#include <string.h>
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
	char *c;
	
	j = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	strcpy(c, *s);
	for (i = i - 1; i >= 0; i--)
	{
		s[j] = c[i];
		j++;
	}
}
