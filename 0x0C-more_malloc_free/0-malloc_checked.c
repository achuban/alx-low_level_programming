#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
*
* @b: b is int
* Description: 'allocates memory using malloc'
* return: pointer
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
