#include "main.h"
#include <stdio.h>
/**
* print_array - prints print_array
*
* @a: a is a ponter to int
* @n: n is int
* Description: 'prints print_array'
*/

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n - 1; i++)
	{
		printf("%d"a[i]);
		if (i != (n - 2))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
