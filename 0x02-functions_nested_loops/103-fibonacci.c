#include <stdio.h>
/**
* main - Fibonacci Series
*
* Description: 'print_ the first 50 Fibonacci Series'
* Return: Always 0 (Succuccess)
*/
int main(void)
{
	int i;
	int f;
	int p1;
	int p2;
	int s;

	p1 = 2;
	p2 = 1;
	s = 2;

	while (s <= 4000000)
	{
		f = p1 + p2;
		p2 = p1;
		p1 = f;
		if (f % 2 == 0)
			s +=f;
	}
	printf("%d", s);
	printf("\n");

	return (0);
}
