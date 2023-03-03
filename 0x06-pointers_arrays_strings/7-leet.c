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

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = (c[i] == 'A' || c[i] == 'a') ? 4 : c[i];
		c[i] = (c[i] == 'E' || c[i] == 'e') ? 3 : c[i];
		c[i] = (c[i] == 'O' || c[i] == 'o') ? 0 : c[i];
		c[i] = (c[i] == 'T' || c[i] == 't') ? 7 : c[i];
		c[i] = (c[i] == 'L' || c[i] == 'l') ? 1 : c[i];
	}
	return (c);
}
