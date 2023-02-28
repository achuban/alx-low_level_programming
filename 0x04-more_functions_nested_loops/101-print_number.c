#include "main.h"
/**
* print_number - Print - triangle
*
* @n: int n parameter
* Description: 'print_tnumber with putchar'
*/
void print_number(int n)
{
	int c;
	
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		while (n != 1)
		{
			c = n / 10;
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
