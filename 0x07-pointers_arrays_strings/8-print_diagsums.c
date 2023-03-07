#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  prints the sum of the two diagonals of a square matrix of integers
*
* @a: s is a array
* @size: size
* Description: 'prints the sum of the two diagonals of a square matrix of integers'
* Return: void
*/
void print_diagsums(int *a, int size)
{	
	int i;
	int j;
	int s1;
	int s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[j];
			if (j == (size - i -1))
				s2 += a[j];
		}
	}
	printf("%i, %i\n", s1, s2);
}
