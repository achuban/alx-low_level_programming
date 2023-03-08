#include "main.h"
/**
* _puts_recursion -  prints a string recursion
*
* @s: s is char pointer to be printed
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
