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
	int x;

	x = 1;
	for (c = 0; c < 9; c++)
	{
		for (d = x; d < 10; d++)
		{
			putchar(48 + c);
			putchar(48 + d);
			if (c < 8)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++;
	}

	putchar('\n');

	return (0);
}
