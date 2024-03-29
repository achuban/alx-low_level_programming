#include "main.h"
#include <stdlib.h>
/**
* array_range - allocates memory for an array, using malloc
*
* @min: min is int
* @max: max is int
* Description: 'allocates memory for an array, using malloc'
* Return: int pointer
*/
int *array_range(int min, int max)
{
	int *s;
	int i;
	int d;

	if (min > max)
		return (NULL);
	d = (max - min) + 1;
	s = malloc(d * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < d; i++)
	{
		s[i] = min + i;
	}
	return (s);
}
