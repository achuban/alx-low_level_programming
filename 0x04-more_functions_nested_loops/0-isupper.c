#include "main.h"
/**
* _isupper - checks if the input is upper case - the alphabet game
*
* @c: gets int value
* Description: 'checks if the input is upper case - the alphabet game'
* Return: Always 0 (Succuccess)
*/
int _isupper(int c)
{
	int r;

	r = 0;
	if (c >= 65 && c =< 90)
		r = 1;

	return (r);
}
