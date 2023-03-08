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
	if(*s == '\0' || l < 0 || r < 0)
		return 0;
	if(l >= r)
		return 1;
	if(s[l] == s[r])
		return ch_palindrome(s, l + 1, r - 1);
	return 0;
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
