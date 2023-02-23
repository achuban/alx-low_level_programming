#include "main.h"
/**
* jack_bauer - Print - the alphabet game
*
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
void jack_bauer(void)
{
	int h;
	int h1;
	int m;
	int m1;

	h = 0;
	h1 = 0;
	m = 0;
	m1 = 0;

	for (h = 0; h < 10; h++)
	{
		for (h1 = 0; h1 < 10; h1++)
		{
			for (m = 0; m < 10; m++)
			{
				for (m1 = 0; m1 < 10; m1++)
				{
					_putchar(h + '0');
					_putchar(h1 + '0');
					_putchar(58);
					_putchar(m + '0');
					_putchar(m1 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
