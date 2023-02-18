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
	char s;
	char e;
	int i;

	i = 0;
	s = 'a';
	e = 'z';

	while (i < 2)
	{
		for (c = s; c <= e; c++)
		{
			putchar(c);
		}
		i++;
		s = toupper(s);
		e = toupper(e);
	}

	putchar('\n');

	return (0);
}
