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

	p1 = 1;
	p2 = 0;

	while (i <= 50)
	{
		if (i != 50)
		{
			printf("%d, ", p2);
			printf("%d, ", p1);
		}
		else
		{
			printf("%d", p2);
			printf("%d", p1);
		}
		f = p1 + p2;
		p2 = p1;
		p1 = f;
	}
	printf("\n");

	return (0);
}
