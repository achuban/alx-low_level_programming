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

	for (c = 0; c < 10; c++)
	{
		putchar(48 + c);
	}

	putchar('\n');

	return (0);
}
