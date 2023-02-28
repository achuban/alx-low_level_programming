#include "main.h"
/**
* puts_half - prints half string with a new line at the end
*
* @str: s is a ponter to sting
* Description: 'prints half string with a new line at the end '
*/

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = i / 2;
	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
