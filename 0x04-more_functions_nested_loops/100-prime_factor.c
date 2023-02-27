#include <stdio.h>
/**
* main - Print - the largest prime factor
*
* Description: 'prints the largest prime factor of the number 612852475143'
* Return: Always 0 (Succuccess)
*/
int main(void)
{
	long int n;
	long int m;
	int p;
	
	n = 612852475143;
	p = 2;
	
	while (n != 0)
	{
		if (n % p != 0)
		{
			p = p +1;
		}
		else
		{
			m = n;
			n = n / p;
			if (n == 1)
			{
				printf("%li\n", m);
				break;
			}
		}
	}
	return (0);
}
