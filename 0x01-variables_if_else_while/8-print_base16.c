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

	for (c = 0; c < 16; c++)
	{
		if (c < 10)
			putchar(48 + c);
		else
			putchar(87 + c);
	}

	putchar('\n');

	return (0);
}
