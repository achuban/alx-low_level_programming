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
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
