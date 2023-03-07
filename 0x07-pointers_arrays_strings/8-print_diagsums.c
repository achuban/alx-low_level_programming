#include "main.h"
#include <stdio.h>
/**
* print_diagsums - sum of the two diagonals of a square matrix
*
* @a: s is a array
* @size: size
* Description: 'sum of the two diagonals of a square matrix'
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;
	int l;
	int s1;
	int s2;

	s1 = 0;
	s2 = 0;
	l = 0;
	k = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[l];
			if (j == k)
				s2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", s1, s2);
}
