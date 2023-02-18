#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Print - the alphabet game
*
* Description: 'the program's description'
* Return: Always 0 (Succuccess)
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
