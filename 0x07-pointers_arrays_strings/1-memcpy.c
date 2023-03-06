#include "main.h"
/**
* _memcpy - copies n characters from memory area src to dest
*
* @dest: dest is a ponter to char dest
* @src: src is a ponter to char src
* @n: n is unsigned int, Number of bytes to be filled
* Description: 'concatenates two string until n'
* Return: s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
