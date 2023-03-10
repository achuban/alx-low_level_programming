#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars, and initializes it
*
* @size: size is int size
* @c: c is a char
* Description: 'creates an array of chars, and initializes it'
* Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
