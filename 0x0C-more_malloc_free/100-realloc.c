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

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (ptr == NULL && new_size != 0)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	s = malloc(new_size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		s[i] = ptr[i];
	}
	ptr = s;
	return (ptr);
}
