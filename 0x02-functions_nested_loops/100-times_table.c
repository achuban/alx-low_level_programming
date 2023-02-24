#include <stdio.h>
#include "main.h"
/**
* print_times_table - Print - the times table
*
* @n: n is int
* Description: 'print times table program's description'
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
			}
			_putchar('\n');
		}
}

/**
* prow - Print - the alphabet game
*
* @n: n is int, user input
* @nt: n is int, next multiple value
* @r: n is int, row
* Description: 'print the spacing'
* Return: Always 0 (Succuccess)
*/
void prow(int n, int nt, int r)
{
	if (r < n)
	{
		if (nt < 10)
		{
			printf(",   ");
		}
		else if (nt >= 10 && n < 100)
		{
			printf(",  ");
		}
		else if (nt >= 100)
		{
			printf(", ");
		}
	}
}
