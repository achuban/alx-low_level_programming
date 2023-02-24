#include <stdio.h>
/**
* main - multiples of 3 or 5
*
* Description: 'print_ multiples of 3 or 5  below 1024 (excluded)'
* Return: Always 0 (Succuccess)
*/
int main(void)
{
	int i;
	int s;
	
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			s += i;
		else if (i % 5 == 0)
			s += i;
	}
	printf("%d", s);
	printf("\n");
	
	return (0);
}
