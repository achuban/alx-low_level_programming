#include "main.h"
/**
* _puts_recursion -  prints a string recursion
*
* @s: s is char pointer to be printed
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	int i;

	if (s != '\0')
		return (0);
	else
		_puts_recursion(s++);
	return (0);
}
