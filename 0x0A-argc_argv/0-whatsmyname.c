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
	printf("%s\n", argv[0]);
	argc++;
	return (0);
}
