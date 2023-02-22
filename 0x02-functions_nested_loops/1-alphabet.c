#include "main.h"
/**
* main - Print - the alphabet game
*
* Description: 'the program's description'
* Return: Always 0 (Succuccess)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
