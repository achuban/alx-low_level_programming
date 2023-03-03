#include "main.h"
/**
* leet - leet encoding
*
* @c: c is a ponter to char dest
* Return: dest
*/
char *leet(char *c)
{
	int i;
	int j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == s1[j])
				c[i] = s2[j];
		}
	}
	return (c);
}
