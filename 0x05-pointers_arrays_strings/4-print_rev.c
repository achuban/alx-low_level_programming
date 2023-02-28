#include "main.h"
/**
* print_rev - prints string in reverse with a new line at the end
*
* @s: s is a ponter to sting
* Description: 'prints string with a new line at the end '
*/

void print_rev(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
