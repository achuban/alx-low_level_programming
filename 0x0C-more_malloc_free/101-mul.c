#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two positive numbers
*
* @argc: s is a ponter to sting
* @argv: s is a ponter to sting
* Description: 'multiplies two positive numbers'
* Return: always 0
*/
int main(int argc, char *argv[])
{
	char *l;
	int i;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		l = argv[i];
		while (l[i])
		{
			if (l[i] < '0' || l[i] > '9')
			{
				printf("%s\n", c);
				exit(98);
			}
			i++;
		}
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
