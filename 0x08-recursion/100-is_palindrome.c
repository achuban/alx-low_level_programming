#include "main.h"
int _strlen_recursion(char *s);
/**
* is_palindrome - check if if a string is a palindrome
*
* @s: s is char pointer
* Return: int.
*/
int is_palindrome(char *s)
{
	int l;
	int r;

	l = 0;
	r =  _strlen_recursion(s);
	if (r == 0)
		return (1);
	return (ch_palindrome(s, l, r));
}
/**
* ch_palindrome - check if if a string is a palindrome
*
* @s: s is char pointer
* @l: l is int, leftIndex
* @r: r is int, rightIndex
* Return: int.
*/
int ch_palindrome(char *s, int l, int r)
{
	if (s[l] != s[r])
		return (0);
	if (l < r + 1)
		return (ch_palindrome(s, l + 1, r - 1));
	return (1);
}
/**
* _strlen_recursion - cout string
*
* @s: s is char pointer
* Return: int.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
