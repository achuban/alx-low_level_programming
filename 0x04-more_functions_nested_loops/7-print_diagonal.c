#include "main.h"
/**
* print_diagonal - Print - diagonal
*
* @n: int n parameter 
* Description: 'print_diagonal with \'
*/
void print_diagonal(int n)
{
	int c;
	int r;

	for (c = 0; c < n; c++)
	{
		for (r = 0; r < c; r++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
