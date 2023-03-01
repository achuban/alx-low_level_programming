#include "main.h"
/**
* _strncpy - prints string with a new line at the end
*
* @dest: s is a ponter to char dest
* @src: src is a pointer to char src
* @n: is int 
* Description: 'prints string with a new line at the end '
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = 0;
		else
			dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
