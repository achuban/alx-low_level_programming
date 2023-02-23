#include <stdio.h>
#include "main.h"
/**
* print_to_98- Print - the alphabet game
*
* @n: n is int
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
void print_to_98(int n)
{
	int c;

	if (n <= 98)
		for (c = n; c <= 98; c++)
		{
			if (c < -10 && c < 9)
			{
				printf("%d", c);
			}
			if (c != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	else
		for (c = n; c >= 98; c--)
		{
			if (c < -10 && c < 9)
			{
				printf("%d", c);
			}
			if (c != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	_putchar('\n');
}
