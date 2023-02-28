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
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
