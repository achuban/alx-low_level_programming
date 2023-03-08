#include "main.h"
/**
* _sqrt_recursion - value of x raised to the power of y
*
* @n: n is int
* Return: int.
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (roots(n, 1));
}
/**
* roots - value of x raised to the power of y
*
* @r: r is int
* @c: c is int
* Return: int.
*/
int roots(int r, int c)
{
	if (c * c == r)
		return (c);
	else if (c * c > r)
		return (-1);
	else
		return (_root_sqrt(raiz, cont + 1));
}
