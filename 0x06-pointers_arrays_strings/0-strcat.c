#include "main.h"
/**
* _strcat - concatenates two string
*
* @dest: dest is a ponter to char dest
* @src: src is a pointer to char src
* Description: 'concatenates two string'
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int c;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (c = 0; c < i; c++)
	{
		dest[j + i] = src[c];
	}
	dest[i] = '\0';
	return (dest);
}
