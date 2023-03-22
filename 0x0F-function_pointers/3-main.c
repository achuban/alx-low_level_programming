#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - performs simple operations 
*
* @argc: argc is count of arg
* @argv: argv is a ponter to arg value
* Description: 'performs simple operations +,-,*,/,%'
* Return: int
*/
int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
