#include "main.h"
/**
* print_numbers - Print - nubers 0-9
*
* Description: 'print numbers from0-9'
*/
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(48 + c);
	}
	_putchar('\n');
}
