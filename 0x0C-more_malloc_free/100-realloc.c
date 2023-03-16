#include "main.h"
#include <stdlib.h>
/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: ptr is a pointer
* @old_size: old_size is int
* @new_size: new_size is int
* Description: 'reallocates a memory block using malloc and free'
* Return: int pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;
	unsigned int d;

	d = 0;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (ptr == NULL && new_size != 0)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		else
			return (s);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	d = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < d; i++)
	{
		s[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (s);
}
