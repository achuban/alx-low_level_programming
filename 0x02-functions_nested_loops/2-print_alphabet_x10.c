#include "main.h"
/**
* print_alphabet_x10 - Print - the alphabet game
*
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	i++;
	_putchar('\n');
	}
}
