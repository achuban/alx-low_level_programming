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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
