#include "main.h"
/**
* factorial -  calcuate factorial
*
* @n: n is int
* Return: int.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (factorial(n - 1) * n);
}
