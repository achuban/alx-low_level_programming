#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all -  array iterator
*
* @n: n is first param
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int s;

	if (n == 0)
		return (0);

	va_start(ap, arg1);
	for (i = arg1; i >= 0; i = va_arg(ap, int))
		s += va_arg(ap, int);

	va_end(ap);
	return (s);
}
