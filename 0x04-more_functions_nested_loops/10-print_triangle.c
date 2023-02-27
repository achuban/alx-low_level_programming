#include "main.h"
/**
* print_triangle - Print - triangle
*
* @size: int n parameter
* Description: 'print_triangle with #'
*/
void print_triangle(int size)
{
	int c;
	int r;

	for (c = 0; c < size; c++)
	{
		for (r = 0; r < size; r++)
		{
			if (r <= (size - c))
				_putchar(32);
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
