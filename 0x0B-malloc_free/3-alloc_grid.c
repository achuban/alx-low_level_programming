#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array
*
* @width: width is int
* @height: height is int
* Description: 'returns a pointer to a 2 dimensional array'
* Return: int
*/
int **alloc_grid(int width, int height)
{
	int *s;
	int i;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	s = malloc((width * height) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < width * height; i++)
	{
		s[i] = 0;
	}
	return (s);
}
