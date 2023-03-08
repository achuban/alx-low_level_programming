#include "main.h"
/**
* _puts_recursion -  prints a string recursion
*
* @s: s is char pointer to be printed
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
