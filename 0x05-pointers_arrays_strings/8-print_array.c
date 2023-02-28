#include "main.h"
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
	
	for (i = 0; i < n; i++)
	{
		_puts(a + i);
		if (i != (n - 1))
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
