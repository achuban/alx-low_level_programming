#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer
*
* @array: array is array of int
* @size: size is second parm
* @cmp: action is pointer to function
* Return: index of the frist match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int r;

	r = -1;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (r);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);
	return (r);
}
