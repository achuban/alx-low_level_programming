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

	for (c = 0; c < 10; c++)
	{
		for  (r = 0; r < 14; r++)
		{
			_putchar(r + 48); 
		}
		_putchar('\n');
	}
	_putchar('\n');
}
