#include "main.h"
/**
* _memset - fill a block of memory with a particular value
*
* @s: s is a ponter to char dest
* @b: b is a char to fill
* @n: n is unsigned int, Number of bytes to be filled
* Description: 'concatenates two string until n'
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
