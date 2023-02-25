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
	long f;
	long p1;
	long p2;

	p1 = 2;
	p2 = 1;
	i = 0;
	
	printf("%d, ", p2);
	printf("%d, ", p1);

	while (i < 49)
	{
		f = p1 + p2;
		p2 = p1;
		p1 = f;
		
		if (i != 50)
		{
			printf("%d, ", f);
		}
		else
		{
			printf("%d", f);
		}
		
		i++;
	}
	printf("\n");

	return (0);
}
