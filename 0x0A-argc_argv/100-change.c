#include <stdio.h>
#include <stdlib.h>
/**
* main - prints minimum number coins to make change for an amount of money.
*
* @argc: number of arguments
* @argv: array with the arguments
*
* Return: always 0
**/
int main(int argc, char *argv[])
{
	int coins;
	int n;
	char c[] = "Error";

	coins = 0;
	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	n = atoi(argv[1]);
	while (n >= 25)
	{
		n -= 25;
		coins++;
	}
	while (n >= 10)
	{
		n -= 10;
		coins++;
	}
	while (n >= 5)
	{
		n -= 5;
		coins++;
	}
	while (n >= 2)
	{
		n -= 2;
		coins++;
	}
	if (n == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
