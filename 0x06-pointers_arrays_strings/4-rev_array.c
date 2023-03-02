#include "main.h"
/**
* reverse_array - reverse array
*
* @a: s1 first param, is a pointer to int
* @n: n second param, is int
*/
void reverse_array(int *a, int n)
{
	int i;
	int r;
	int j;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		r = a[i];
		a[i] = a[j];
		a[j] = r;
		j--;
	}
}
