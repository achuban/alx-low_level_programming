#include <stdio.h>
/**
* main - Fibonacci Series
*
* Description: 'print_ the first 50 Fibonacci Series'
* Return: Always 0 (Succuccess)
*/
int main(void)
{
	long f;
	long p1;
	long p2;
	long s;

	p1 = 2;
	p2 = 1;
	s = 2;

	while (f <= 4000000)
	{
		f = p1 + p2;
		p2 = p1;
		p1 = f;
		if (f % 2 == 0)
			s += f;
	}
	printf("%li", s);
	printf("\n");

	return (0);
}
