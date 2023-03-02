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

	for (i = 0; i < n; i++)
	{
		r = a[i];
		a[i] = a[n - i];
		a[n - 1] = r;
	}
}
