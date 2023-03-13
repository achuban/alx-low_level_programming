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
	char c[] = "Error";

	conis = 0;
	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	while (atoi(argv[1]) >= 25)
	{
		atoi(argv[1]) -= 25;
		coins++;
	}
	while (atoi(argv[1]) >= 10)
	{
		atoi(argv[1]) -= 10;
		coins++;
	}
	while (atoi(argv[1]) >= 5)
	{
		atoi(argv[1]) -= 5;
		coins++;
	}
	while (atoi(argv[1]) >= 2)
	{
		atoi(argv[1]) -= 2;
		coins++;
	}
	if (atoi(argv[1]) == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
