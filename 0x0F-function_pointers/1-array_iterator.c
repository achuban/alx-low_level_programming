#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator -  array iterator
*
* @array: array is array of int
* @size: size is second parm
* @action: action is pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
