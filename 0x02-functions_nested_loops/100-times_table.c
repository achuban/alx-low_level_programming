#include <stdio.h>
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
	int nt;
	
	if (n > 0 && n < 16)
		for (c = 0; c <= n; c++)
		{
			for (r = 0; r <= n; r++)
			{
				m = c * r;
				nt = (c + 1) * r;
				printf("%d", m);
				prow(nt, r);
			}
			_putchar('\n');
		}
}

void prow(int n, int r)
{
	if (r < n)
	{
		if (n < 10)
		{
			printf(",   ");
		}
		else if (n >= 10 && n < 100)
		{
			printf(",  ");
		}
		else if (n >= 100)
		{
			printf(", ");
		}
	}
}
