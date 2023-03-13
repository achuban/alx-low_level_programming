#include <stdio.h>
#include <stdlib.h>
/**
* main - prints string with a new line at the end
*
* @argc: s is a ponter to sting
* @argv: s is a ponter to sting
* Description: 'prints string with a new line at the end '
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;
	int s;
	char *l;
	char c[] = "Error";

	s = 0;
	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		l = argv[i];
		while (*l != 0)
		{
			if (*l < 47 || *l > 57)
			{
				printf("%s\n", c);
				return (1);
			}
			l++;
		}
		s += atoi(argv[i]);
	}
	printf("%i\n", s);
	return (0);
}
