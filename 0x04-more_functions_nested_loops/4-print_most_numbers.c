#include "main.h"
/**
* print_most_numbers - Print - nubers 0-9 ot 2&4
*
* Description: 'print numbers from0-9 but not 2 || 4'
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar(48 + c);
	}
	_putchar('\n');
}
