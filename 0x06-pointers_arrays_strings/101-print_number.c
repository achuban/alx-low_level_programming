#include "main.h"
/**
* print_number - Print - nubers
*
* @n: int n param to be displayed
* Description: 'print numbers'
*/
void print_number(int n)
{
	unsigned int p;

	p = n;
	if (n < 0)
	{
		_putchar('-');
		p = -n;
	}
	if (p / 10 != 0)
		print_number(p / 10);
	_putchar((p % 10) + '0');
}
