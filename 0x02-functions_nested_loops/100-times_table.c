#include "main.h"
/**
* print_times_table - Print - the alphabet game
*
* @n: n is int
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
void print_times_table(int n)
{
	int c;
	int r;
	int m;

	if (n > 0 && n < 16)
		for (c = 0; c <= n; c++)
		{
			prow(n, c, r);
			_putchar('\n');
		}
}

void prow(int n, int c, int r)
{
	for (r = 0; r <= n; r++)
	{
		m = c * r;
		if (m < 10)
		{
			_putchar(m + '0');
			if (r < n)
			{
				_putchar(44);
				_putchar(32);
				if ((r + 1) * c < 10)
					_putchar(32);
			}
		}
		else if (m > 10 && m < 100)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			if (r < n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		else if (m > 100)
		{
			_putchar((m / 100) + '0');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			if(r < n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}	
}
