#include <stdio.h>
#include "main.h"
/**
* main - Print - Fizz-Buzz test nubers 0-100
*
* Description: 'Fizz-Buzz test with multipiy of 3 & 5 nubers 0-100'
*/
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
			printf("FizzBuzz ");
		else if (c % 3 == 0)
			printf("Fizz ");
		else if (c % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", c);
	}
	_putchar('\n');
	return(0);
}
