#include "main.h"
/**
* puts2 - prints every other character of a string
*
* @str: s is a ponter to sting
* Description: 'prints every other char starting with the 1st, followed by a \n'
*/

void puts2(char *str)
{
	int i;
	int j;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (j == 0)
		{
			_putchar(str[i]);
			j = 1;
		}
		else
		{
			j = 0;
		}
	}
	_putchar('\n');
}
