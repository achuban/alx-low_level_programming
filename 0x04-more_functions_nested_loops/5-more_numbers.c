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
			if (r < 10)
			{
				just_print(r + 48);
			}
			else
			{
				just_print((r / 10) + 48);
				just_print((r % 10) + 48);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
/**
* print_numbers - Print - char
*
* @r: char input to print 
* Description: 'print char'
*/
void just_print(int r)
{
	_putchar(r);
}
