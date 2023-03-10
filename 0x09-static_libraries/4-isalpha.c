#include "main.h"
/**
* _isalpha - Print - the alphabet game
*
* @c: gets int value
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
int _isalpha(int c)
{
	int r;

	r = 0;
	if (c > 96 && c < 123)
		r = 1;
	if (c > 64 && c < 90)
		r = 1;

	return (r);
}
