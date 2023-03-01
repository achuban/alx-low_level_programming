#include "main.h"
/**
* _strcat - concatenates two string
*
* @dest: dest is a ponter to char dest
* @src: src is a pointer to char src
 @n: n is int
* Description: 'concatenates two string until n'
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
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
	for (c = 0; c < n; c++)
	{
		dest[j + c] = src[c];
	}
	dest[j + c] = '\0';
	return (dest);
}
