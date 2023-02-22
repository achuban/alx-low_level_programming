#include "main.h"
/**
* print_sign - Print - the alphabet game
*
* @n: gets int value
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
int print_sign(int n)
{
	int r;

	r = 0;
	if (n > 0)
	{
		_putchar(43);
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar(45);
		r = -1;
	}

	return (r);
}
