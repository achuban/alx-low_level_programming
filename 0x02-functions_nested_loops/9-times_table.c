#include "main.h"
/**
* times_table - Print - the alphabet game
*
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
void times_table(void)
{
	int c;
	int r;
	int m;

	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
			m = c * r;
			if (m < 10)
			{
				_putchar(m + '0');
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
