#include "main.h"
/**
* _strncat - concatenates two string
*
* @dest: dest is a ponter to char dest
* @src: src is a pointer to char src
* @n: n is int
* Description: 'concatenates two string until n'
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int c;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	n = (n >= j) ? j : n;
	for (c = 0; c < n; c++)
	{
		dest[j + c] = src[c];
	}
	dest[j + c] = '\0';
	return (dest);
}
