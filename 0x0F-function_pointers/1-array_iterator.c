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
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
