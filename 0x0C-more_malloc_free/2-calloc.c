#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc
*
* @nmemb: nmemb is unsigned int
* @size: size is unsigned int
* Description: 'allocates memory for an array, using malloc'
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = 0;
	}
	return (s);
}
