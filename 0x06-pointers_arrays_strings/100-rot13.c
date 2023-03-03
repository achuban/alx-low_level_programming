#include "main.h"
/**
* rot13 - leet encoding
*
* @c: c is a ponter to char dest
* Return: dest
*/
char *rot13(char *c)
{
	int i;
	int j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
				break;
			}
		}
	}
	return (c);
}
