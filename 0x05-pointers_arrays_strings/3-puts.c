#include "main.h"
/**
* _puts - prints string with a new line at the end 
*
* @str: s is a ponter to sting
* Description: 'prints string with a new line at the end '
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
