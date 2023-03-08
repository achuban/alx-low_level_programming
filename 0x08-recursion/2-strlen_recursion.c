#include "main.h"
/**
* _puts_recursion -  prints a string recursion
*
* @s: s is char pointer to be printed
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		i++;
		s++;
		_strlen_recursion(s);
	}
	return (i);
}
