#include "main.h"
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

	if(NULL == s || l < 0 || r < 0)
		return 0;
	if(l >= r)
		return 1;
	if(s[l] == s[r])
	{
		return is_palindrome(s, l + 1, r - 1);
	}
	return 0;
}
