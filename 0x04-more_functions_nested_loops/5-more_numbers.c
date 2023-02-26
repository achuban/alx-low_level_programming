#include "main.h"
/**
* more_numbers - Print - nubers 0-14
*
* Description: 'print numbers from 0-14'
*/
void more_numbers(void)
{
	int c;
	int r;
	int n;

	for (c = 0; c < 10; c++)
	{
		for  (r = 0; r < 14; r++)
		{
			if (r < 10)
			{
				print_numbers(r);
			}
			else
			{
				print_numbers(r / 10);
				print_numbers(r % 10);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
/**
* print_numbers - Print - nubers 0-14
*
* Description: 'print numbers from 0-14'
*/
void print_numbers(char r)
{
	_putchar(r + 48);
}
