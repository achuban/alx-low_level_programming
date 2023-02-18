#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Print - the number game
*
* Description: 'the program's description'
* Return: Always 0 (Succuccess)
*/
int main(void)
{
	int c;
	int d;
	int e;
	int x;
	int y;

	x = 1;
	y = 2;
	for (c = 0; c < 8; c++)
	{
		for (d = x; d < 9; d++)
		{
			for (e = y; e < 10; e++)
			{
				putchar(48 + c);
				putchar(48 + d);
				putchar(48 + e);
				if (c < 7)
				{
					putchar(44);
					putchar(32);
				}
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);
}
