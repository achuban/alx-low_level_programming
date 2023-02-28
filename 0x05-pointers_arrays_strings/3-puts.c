#include "main.h"
/**
* _puts - reset to 98
*
* @s: s is a ponter to char data type
* Description: 'count the length'
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
