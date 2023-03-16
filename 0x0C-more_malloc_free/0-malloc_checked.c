#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
*
* @b: b is int
* Description: 'returns a pointer to a newly copied str'
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);
	return (s);
}
