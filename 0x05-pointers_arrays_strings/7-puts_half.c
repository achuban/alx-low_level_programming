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
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if ((i % 2 == 0))
		n = i / 2;
	else
		n = (i / 2) + 1;
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
