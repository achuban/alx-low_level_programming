#include "main.h"
/**
* print_diagsums -  prints the sum of the two diagonals of a square matrix of integers
*
* @a: s is a array
* @size: size
* Description: 'prints the sum of the two diagonals of a square matrix of integers'
* Return: void
*/
void print_diagsums(int *a[], int size)
{	
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar(a[i][i]);
		_putchar(',');
		_putchar(' ');
		_putchar(a[i][size - i - 1]);
	}
}
