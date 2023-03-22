#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* op_add -  Adds two no
*
* @a: a is the first param
* @b: b is the second param
* Return: Sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub -  sub two no
*
* @a: a is the first param
* @b: b is the second param
* Return: sub
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul -  mul two no
*
* @a: a is the first param
* @b: b is the second param
* Return: mul
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div -  div two no
*
* @a: a is the first param
* @b: b is the second param
* Return: div
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod -  mod two no
*
* @a: a is the first param
* @b: b is the second param
* Return: mod
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
