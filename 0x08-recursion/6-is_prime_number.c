#include "main.h"
/**
* is_prime_number - check if a number is prime
*
* @n: n is int
* Return: int.
*/
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (primN(n, i));
}
/**
* primN - check if a number is prime
*
* @n: n is int
* @i: i is int
* Return: int.
*/
int primN(int n, int i)
{
	if (n / 2 < i)
		return (1);
	if (n % i == 0)
		return (0);
	return (primN(n, i + 1));
}
