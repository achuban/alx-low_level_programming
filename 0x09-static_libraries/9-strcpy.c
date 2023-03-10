#include "main.h"
/**
* _strcpy - prints string with a new line at the end
*
* @dest: s is a ponter to char dest
* @src: src is a pointer to char src
* Description: 'prints string with a new line at the end '
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
